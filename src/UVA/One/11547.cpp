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
    
    int n;
    
    for (int test = 0; test < tests; test++) {
        cin >> n;
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        n /= 10;
        n %= 10;
        n = sqrt(n * n);
        cout << n << '\n';
    }
}