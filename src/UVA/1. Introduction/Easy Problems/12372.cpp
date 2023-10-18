#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tests;
    cin >> tests;
    
    int l,w,h;
    
    for (int test = 1; test <= tests; test++) {
        cout << "Case " << test << ": ";
        cin >> l >> w >> h;

        if (l > 20 || w > 20 || h > 20) {
            cout << "bad";
        } else {
            cout << "good";
        }

        cout << "\n";
    }
}