#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int b, n;
    while (cin >> b >> n, b || n) {
        int banks[b];
        for (int i = 0; i < b; i++) {
            cin >> banks[i];
        }

        int debtor, creditor, value;
        for (int i = 0; i < n; i++) {
            cin >> debtor >> creditor >> value;
            banks[debtor - 1] -= value;
            banks[creditor - 1] += value;
        }

        int good = true;

        for (int i =0; i < b; i++) {
            if (banks[i] < 0) {
                good = false;
                break;
            }
        }
        cout << (good ? "S" : "N") << endl;
    }

}