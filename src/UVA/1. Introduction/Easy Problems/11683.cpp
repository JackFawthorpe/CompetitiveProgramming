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

    int height, length;

    while (cin >> height >> length, height || length) {
        int counter = 0;
        int prevHeight;
        cin >> prevHeight;
        counter += height - prevHeight;
        for (int i = 1; i < length; i++) {
            cin >> tempInt;
            counter += max(0, prevHeight - tempInt);
            prevHeight = tempInt;
        }

        cout << counter << endl;
    }

}