#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    transform(line.begin(), line.end(), line.begin(), ::toupper);
    cout << line << endl;
    return 0;
}