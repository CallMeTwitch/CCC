#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 1, b = 2, c = 3, d = 4, temp;
    string input;cin >> input;

    int h = count(input.begin(), input.end(), 'H') % 2;
    int v = count(input.begin(), input.end(), 'V') % 2;

    if (h) {
        temp = a;
        a = c;
        c = temp;

        temp = b;
        b = d;
        d = temp;
    }
    if (v) {
        temp = a;
        a = b;
        b = temp;

        temp = c;
        c = d;
        d = temp;
    }

    cout << a << ' ' << b << endl << c << ' ' << d;
}