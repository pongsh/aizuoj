#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(101, 0);
    int n, mode=0;

    while (cin >> n) {
        numbers[n]++;
        if (numbers[n] > mode) { mode=numbers[n]; }
    }

    for (int i = 0; i != numbers.size(); ++i) {
        if (numbers[i] == mode) { cout << i << endl; }
    }

    return 0;
}