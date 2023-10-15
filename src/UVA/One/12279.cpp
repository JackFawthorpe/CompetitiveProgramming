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
    int tc = 1;

    while (cin >> n, n != 0) {
        cout << "Case " << tc << ": ";
        int counter = 0;
        int val;
        for (int i = 0; i < n; i++) {
            cin >> val;
            if (val == 0) {
                counter--;
            } else {
                counter++;
            }
        }

        cout << counter;
        cout << "\n";
        tc++;
    }

}