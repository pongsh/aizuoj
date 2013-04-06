#include <iostream>
using namespace std;

long long gcd(long long a, long long b);

int main() {
    long long a, b, res;
    while (cin >> a >> b) {
        res = gcd(a,b);
        cout << res << " " << (a*b)/res << endl;
    }
    return 0;
}

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, (a%b));
    }
}