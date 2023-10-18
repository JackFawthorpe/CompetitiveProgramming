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
    
    
    
    for (int test = 0; test < tests; test++) {
        int waterSum = 0;
        int counter = 0;
        stack<int> levels;

        string input;
        cin >> input;

        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '\\') {
                levels.push(1);
            } else if (input[i] == '/' && !levels.empty()) {
                int lowerLevelArea = levels.top();
                levels.pop();
                waterSum += lowerLevelArea;
                if (!levels.empty()) {
                    levels.top() += lowerLevelArea + 1;
                }
            } else if (!levels.empty()) {
                levels.top() += 1;
            }
        }

        cout << waterSum << endl;
    }
}