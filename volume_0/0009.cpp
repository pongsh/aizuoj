#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int numPrimes = 1000000;
    bool primes[numPrimes];
    for (int i = 2; i != numPrimes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(numPrimes)); ++i) {
        if (primes[i]) {        
            for (int j = 2 * i; j < numPrimes; ++j) {
                primes[j] = false;
            }
        }
    }

    int n;
    while (cin >> n) {
        int count = 0;
        for (int i = 2; i <= n; ++i) {
            if (primes[i]) { ++count; }
        }
        cout << count << endl;
    }
    return 0;
}