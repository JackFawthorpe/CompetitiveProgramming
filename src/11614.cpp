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
    
    ll count;
    int output;
    for (int i = 0; i < tests; i++) {
        cin >> count;
        output = floor(sqrt(2 * count + 0.25) - 0.5);
        cout << output << '\n';
    }
}