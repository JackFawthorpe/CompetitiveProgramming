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

    int n, m;

    for (int test = 0; test < tests; test++) {
        cin >> n >> m;
        cout << (n/3) * (m/3) << "\n";
    }
}