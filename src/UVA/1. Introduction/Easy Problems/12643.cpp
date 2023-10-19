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
    int left, right;
    while (cin >> tempInt >> left >> right) {

        int counter = 1;

        while(floor((left - 1) / pow(2, counter)) != floor((right - 1) / pow(2, counter))) {
            counter++;
        }

        cout << counter << '\n';
    }   
}