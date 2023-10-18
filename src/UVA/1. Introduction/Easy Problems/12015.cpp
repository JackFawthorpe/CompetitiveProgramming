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
    
    
    
    for (int test = 1; test <= tests; test++) {
        cout << "Case #" << test << ":\n";
    
        vector<string> urls;
        int maxRelevance = 0;

        string url;
        int urlValue;

        for (int i = 0; i < 10; i++) {
            cin >> url >> urlValue;

            if (urlValue > maxRelevance) {
                maxRelevance = urlValue;
                urls.clear();
                urls.push_back(url);
            } else if (urlValue == maxRelevance) {
                urls.push_back(url);
            }
        }

        for (vector<string>::iterator ptr = urls.begin(); ptr < urls.end(); ptr++) {
            cout << *ptr << endl;
        }
    }

}