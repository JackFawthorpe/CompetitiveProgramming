#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int getWeight(string name) {
    int counter = 0;
    for (int i = 0; i < name.length(); i++) {
        if (isalpha(name[i])) {
            counter += tolower(name[i]) - 'a' + 1;
        }
    }

    while (counter >= 10) {
        int temp = counter;
        int nextCounter = 0;
        while (temp != 0) {
            nextCounter += temp % 10;
            temp /= 10;
        }
        counter = nextCounter;
    }

    return counter;
}

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string first;
    string second;

    while (getline(cin, first)) {
        getline(cin, second);
        int weight1 = getWeight(first);
        int weight2 = getWeight(second);
        float answer = 100 * ((float) min(weight2, weight1)) / max(weight1, weight2);
        printf("%.2f", answer);
        cout << " %\n";
    }
}