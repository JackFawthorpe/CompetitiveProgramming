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
    
    int a,b;
    
    for (int test = 0; test < tests; test++) {
        cin >> a >> b;
        if (a > b) {
            cout << '>';
        } else if (a < b) {
            cout << '<';
        } else {
            cout << '=';
        }
        cout << '\n';
    }
}