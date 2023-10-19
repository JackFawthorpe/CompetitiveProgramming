#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int tempInt;
string tempString;
ll tempLong;
double tempDouble;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tests;
    cin >> tests;
    
    string first;
    string second;
    
    for (int test = 1; test <= tests; test++) {
        cout << "Case " << test << ": ";
    
        int counter = 0;
        int wildCount = 0;

        int swapZeros = 0;
        int swapOnes = 0;

        int wildOnes = 0;

        cin >> first >> second;

        for (int i = 0; i < first.length(); i++) {
            if (first[i] == '?') {
                wildCount++;
                if (second[i] == '1') {
                    wildOnes++;
                }
            } else if (first[i] == '0' && second[i] == '1') {
                swapZeros++;
            } else if (first[i] == '1' && second[i] == '0') {
                swapOnes++;
            }
        }

        if (swapOnes > wildOnes + swapZeros) {
            cout << -1;
        } else {
            // Wild cards + Swaps + Zeros that need to be turned to ones
            cout << wildCount + min(swapOnes, swapZeros) + abs(swapZeros - swapOnes);
        }

        cout << "\n";
    }

}
