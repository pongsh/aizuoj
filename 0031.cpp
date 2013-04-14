// This problem is disguised as an integer to binary converter. Given a certain
// object of mass __ use weights of 2^n sizes to make up that mass.
#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        int d = 1;
        while (n != 0) {
            // If the last digit of the mass represented in binary contains a 1
            // print out that number's value in base 2.
            if (n & 1) {
                cout << d << " ";
            }
            n = n >> 1;
            d = d << 1;
        }
        cout << endl;
    }
    return 0;
}