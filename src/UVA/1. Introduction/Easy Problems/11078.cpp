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

    int left, right;
    int n;

    int difference;

    for (int test = 1; test <= tests; test++) {
        
        cin >> n;
        cin >> left;
        difference = INT_MIN;


        for (int i = 1; i < n; i++) {
            cin >> right;
            difference = max(difference, left - right);
            left = max(left, right);
        }

        cout << difference;

        cout << "\n";
    }
}