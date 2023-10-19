#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int tempInt;
string tempString;
ll tempLong;
double tempDouble;

int calculateMile(int duration) {
    return ceil(((float) duration + 1) / 30) * 10;
}


int calculateJuice(int duration) {
    return ceil(((float) duration + 1) / 60) * 15;
}


int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tests;
    cin >> tests;
    
    
    for (int test = 0; test < tests; test++) {
        cout << "Case " << test + 1 << ": ";
        int mile = 0;
        int juice = 0;

        int callCount;
        cin >> callCount;

        for (int i = 0; i < callCount; i++) {
            cin >> tempInt;
            mile += calculateMile(tempInt);
            juice += calculateJuice(tempInt);
        }    

        if (mile > juice) {
            cout << "Juice ";
        } else if (mile < juice) {
            cout << "Mile ";
        } else {
            cout << "Mile Juice ";
        }
        cout << min(mile, juice) << '\n';
    }
}