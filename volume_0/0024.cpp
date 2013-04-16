#include <iostream>
using namespace std;
int main() {
    double v;
    while (cin >> v) {
        double t = v / 9.8;
        double y = 4.9 * t * t;
        double n = 1;
        while (5 * n - 5 < y) {
            ++n;
        }
        cout << n << endl;
    }
    return 0;
}