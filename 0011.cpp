#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int W, N;
    cin >> W >> N;
    
    int start[W];
    for (int w = 0; w != W; ++w) {
        start[w] = w+1;
    }

    int a, b;

    for (int n = 0; n != N; ++n) {
        cin >> a;
        cin.get();
        cin >> b;
        swap(start[a-1], start[b-1]);
    }

    for (int w = 0; w != W; ++w) {
        cout << start[w] << endl;
    }
    return 0;
}