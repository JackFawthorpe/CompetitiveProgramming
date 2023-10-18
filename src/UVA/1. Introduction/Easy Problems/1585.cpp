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
    
    int pointCounter, cumulativeCounter;
    string input;

    for (int test = 0; test < tests; test++) {
        pointCounter = 0;
        cumulativeCounter = 1;

        cin >> input;

        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'X') {
                cumulativeCounter = 1;
            } else {
                pointCounter += cumulativeCounter;
                cumulativeCounter++;
            }
        }

        cout << pointCounter << endl;
    }
}