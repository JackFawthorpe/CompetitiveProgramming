#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int p, a, b, c, d, n;

    while (cin >> p >> a >> b >> c >> d >> n) {
        double left = INT_MIN;
        double right = left;
        double maximum = 0;
        for (int i = 1; i <= n; i++) {
            double value = p * (sin(a * i + b) + cos(c * i + d) + 2);
            left = max(left, value);
            right = value;
            maximum = max(maximum, left - right);
        }

        printf("%.6f\n", maximum);

    }

}