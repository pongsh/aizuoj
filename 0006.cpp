#include <iostream>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        cout << string(line.rbegin(), line.rend()) << endl;
    }
    return 0;
}