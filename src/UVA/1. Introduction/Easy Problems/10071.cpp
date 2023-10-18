#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int v, t;

    while (cin >> v >> t) {
        cout << v * t * 2 << '\n';
    }
}