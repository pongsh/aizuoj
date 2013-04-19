#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> heights;
    int height;

    while (cin >> height) {
        heights.push_back(height);
    }

    sort(heights.rbegin(), heights.rend());

    for (int i = 0; i != 3; ++i) {
        cout << heights[i] << endl;
    }

    return 0;
}