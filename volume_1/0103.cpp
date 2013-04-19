#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string event;

    for (int n = 0; n != N; ++n) {
        
        int runners = 0, points = 0, out = 0;
        
        while (out < 3) {
            cin >> event;
            if (event == "OUT") out++;
            if (event == "HIT") {
                if (runners == 3) {
                    points++;
                }    
                else {
                    runners++;
                }
            }
            if (event == "HOMERUN") {
                points += runners + 1;
                runners = 0;
            }
        }
        cout << points << endl;
    }
    return 0;
}