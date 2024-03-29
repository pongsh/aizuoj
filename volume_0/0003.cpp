#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sides(3);

    for (int n = 0; n != N; ++n) {
        cin >> sides[0] >> sides[1] >> sides[2];

        sort(sides.begin(), sides.end());

        if (sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2]) {
            cout << "YES" << endl; 
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}