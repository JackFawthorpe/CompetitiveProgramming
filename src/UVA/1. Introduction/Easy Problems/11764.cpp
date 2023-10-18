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
    
    for (int test = 1; test <= tests; test++) {
        cout << "Case " << test << ": ";

        int wallCount, currentHeight, nextHeight;
        int tallCount = 0;
        int shortCount = 0;

        cin >> wallCount;

        cin >> currentHeight;

        for (int i = 1; i < wallCount; i++) {
            cin >> nextHeight;
            if (nextHeight > currentHeight) {
                tallCount++;
            } else if (nextHeight < currentHeight) {
                shortCount++;
            }
            currentHeight = nextHeight;
        }
        
        cout << tallCount << " " << shortCount;
        cout << "\n";
    }
}