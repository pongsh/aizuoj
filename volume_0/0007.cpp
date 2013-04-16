#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int weeks;
    cin >> weeks;
    double loan = 100000;
    for (int week = 0; week != weeks; ++week) {
        loan *= 1.05;
        if (int(loan) % 1000 != 0) 
            loan = (loan+1000)-int(loan+1000)%1000;
    }
    cout << fixed << setprecision(0) << loan << endl;
    return 0;
}