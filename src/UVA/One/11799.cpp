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
    
    for (int test = 1; test <= tests; test++) {
        cout << "Case " << test << ": ";
    
        cin >> n;

        int minSpeed = INT_MIN;
        int studentSpeed;
        for (int i = 0; i < n; i++) {
            cin >> studentSpeed;
            minSpeed = max(minSpeed, studentSpeed);
        }
        cout << minSpeed;
        cout << "\n";
    }

}