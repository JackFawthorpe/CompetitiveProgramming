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

    int personCount, budget, hotelCount, weekCount;

    while (cin >> personCount >> budget >> hotelCount >> weekCount) {
        int minCost = INT_MAX;
        
        for (int i = 0; i < hotelCount; i++) {
            int hotelCost;
            cin >> hotelCost;
            for (int j = 0; j < weekCount; j++) {
                cin >> tempInt;
                if (tempInt >= personCount && hotelCost < minCost) {
                    minCost = hotelCost;
                }
            }

        }

        if (minCost == INT_MAX || minCost * personCount > budget) {
            cout << "stay home";
        } else {
            cout << minCost * personCount;
        }
        cout << '\n';
    }
}