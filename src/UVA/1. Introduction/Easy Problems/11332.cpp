#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string number;
    while (cin >> number, number != "END") {
        int counter = 1;
        while (number != "1") {
            counter++;
            number = to_string(number.length());
        }
        cout << counter << '\n';
    }
}