#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tests;
    cin >> tests;
    
    int n;    
    
    for (int test = 0; test < tests; test++) {
        cin >> n;

        vector<bool> instructions;
        string instruction;

        for (int i = 0; i < n; i++) {
            cin >> instruction;
            if (instruction == "RIGHT") {
                instructions.push_back(true);
            } else if (instruction == "LEFT") {
                instructions.push_back(false);
            } else {
                int index;
                cin >> instruction >> index;
                instructions.push_back(instructions[index - 1]);
            }
        }

        int counter = 0;
        for (vector<bool>::iterator ptr = instructions.begin(); ptr < instructions.end(); ptr++) {
            counter += *ptr ? 1 : -1;
        }

        cout << counter << endl;
    }

}