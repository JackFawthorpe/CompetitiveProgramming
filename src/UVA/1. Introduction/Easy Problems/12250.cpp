#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tc = 1;
    
    string input;
    while (getline(cin, input)) {
        if (input == "#") {
            break;
        }
        cout << "Case " << tc << ": ";

        if (input == "HELLO") {
            cout << "ENGLISH";  
        } else if (input == "HOLA") {
            cout << "SPANISH";
        } else if (input == "HALLO") {
            cout << "GERMAN";
        } else if (input == "BONJOUR") {
            cout << "FRENCH";
        } else if (input == "CIAO") {
            cout << "ITALIAN";
        } else if (input == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN";
        } else {
            cout << "UNKNOWN";
        }

        cout << "\n";
        tc++;
    }
}