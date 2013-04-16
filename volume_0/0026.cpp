#include <iostream>
using namespace std;

int paper[10][10];

void drop(int x, int y) {
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        paper[x][y]++;
    }
}

int main() {
    int x1, y1, size;
    char temp;
    int zeroDensity = 0, maxDensity = 0;

    for (int i = 0; i != 10; ++i) {
        for (int j = 0; j != 10; ++j) {
            paper[i][j] = 0;
        }
    }

    while (cin >> x1 >> temp >> y1 >> temp >> size) {        
        switch (size) {
            case 1:
                drop(x1, y1);    // center
                drop(x1, y1-1);  // top
                drop(x1+1,y1);  // right
                drop(x1,y1+1);  // bottom
                drop(x1-1,y1);  // left
                break;
            case 2:
                for (int i = -1; i != 2; ++i) { drop(x1 + i, y1-1); }
                for (int i = -1; i != 2; ++i) { drop(x1 + i, y1); }
                for (int i = -1; i != 2; ++i) { drop(x1 + i, y1+1); }
                break;
            case 3:
                for (int i = -1; i != 2; ++i) { drop(x1 + i, y1-1); }
                for (int i = -1; i != 2; ++i) { drop(x1 + i, y1); }
                for (int i = -1; i != 2; ++i) { drop(x1 + i, y1+1); }
                drop(x1, y1-2);  // top
                drop(x1+2, y1);  // right
                drop(x1, y1+2);  // bottom
                drop(x1-2, y1);  // left
                break;
        }
    }

    for (int i = 0; i != 10; ++i) {
        for (int j = 0; j != 10; ++j) {
            if (paper[i][j] == 0) {
                ++zeroDensity;
            }
            if (paper[i][j] > maxDensity) {
                maxDensity = paper[i][j];
            }
        }
    }
    cout << zeroDensity << endl;
    cout << maxDensity << endl;
    return 0;
}