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
    
    int counter = 0;
    
    for (int test = 0; test < tests; test++) {
        float l, w, h, weight;
        cin >> l >> w >> h >> weight;
        if (((l > 56 || w > 45 || h > 25) && (l + w + h > 125)) || weight > 7) {
            cout << 0 << endl;
        } else {
            counter++;
            cout << 1 << endl;
        }
    }
    cout << counter << endl;
}