#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    string result;
    cin >> result >> result >> result >> result;

    string output;

    for (int i = 0; i < n; i++) {
        if (result[4 * i + 0] == '*') {
            output += '2';
        } else if (result[4 * i + 1] == '*') {
            output += '1';
        } else {
            output += '3';
        }    
    }
    cout << output << endl;
}