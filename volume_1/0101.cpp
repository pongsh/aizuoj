#include <iostream>
#include <string>
using namespace std;

int main() {
    const string search_text  = "Hoshino";
    const string replace_text = "Hoshina";

    int N;
    cin >> N;
    
    string line;
    getline(cin, line);

    for (int n = 0; n != N; ++n) {
        getline(cin, line);

        while (line.find(search_text) != string::npos) {
            line.replace(line.find(search_text), replace_text.size(), replace_text);
        }
        
        cout << line << endl;
    }
    return 0;
}