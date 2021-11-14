#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin >> n;
    string p1[n], p2;
    map<string, string> partners;
    string output = "good";

    for (int q=0;q<n;q++) {
        cin >> p1[q];
    }

    for (int q=0;q<n;q++) {
        cin >> p2;
        if (p2 != p1[q]) {
            if (partners.count(p1[q]) != 0) {
                if (partners[p1[q]] != p2) output = "bad";
            }
            if (partners.count(p2) != 0) {
                if (partners[p2] != p1[q]) output = "bad";
            }
        }
        else output = "bad";
        partners[p1[q]] = p2;partners[p2] = p1[q];
    }

    cout << output;
}