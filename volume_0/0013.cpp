#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> railway;
    int n;
    while (cin >> n) {
        if (n == 0) {
            cout << railway.top() << endl;
            railway.pop();
        }
        else {
            railway.push(n);
        }
    }
    return 0;
}