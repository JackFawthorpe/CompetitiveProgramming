#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int tempInt;
string tempString;
ll tempLong;
double tempDouble;

int plusZ(int in) {
    switch (in) {
        case 0:
            return 4;
        case 1:
            return 5;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 1;
        case 5:
            return 0;
    }
    return 0;
}


int minusZ(int in) {
    switch (in) {
        case 0:
            return 5;
        case 1:
            return 4;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 0;
        case 5:
            return 1;
    }
    return 0;
}


int plusY(int in) {
    switch (in) {
        case 0:
            return 2;
        case 1:
            return 3;
        case 2:
            return 1;
        case 3:
            return 0;
        case 4:
            return 4;
        case 5:
            return 5;
    }
    return 0;
}


int minusY(int in) {
    switch (in) {
        case 0:
            return 3;
        case 1:
            return 2;
        case 2:
            return 0;
        case 3:
            return 1;
        case 4:
            return 4;
        case 5:
            return 5;
    }
    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int length;

    string directions[] = {"+x", "-x", "+y", "-y", "+z", "-z"};

    while (cin >> length, length) {
        int direction = 0;
        for (int i = 1; i < length; i++) {
            cin >> tempString;
            if (tempString == "+y") {
                direction = plusY(direction);
            } else if (tempString == "-y") {
                direction = minusY(direction);
            } else if (tempString == "+z") {
                direction = plusZ(direction);
            } else if (tempString == "-z") {
                direction = minusZ(direction);
            }
        }

        cout << directions[direction] << '\n';
    }

}