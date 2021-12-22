#include <bits/stdc++.h>

using namespace std;

int main() {
    int question, n, t;cin >> question;
    vector<int> b1, b2;

    cin >> n;
    for (int q=0;q<n;q++) {
        cin >> t;
        b1.push_back(t);
    }
    for (int q=0;q<n;q++) {
        cin >> t;
        b2.push_back(t);
    }
    sort(b1.begin(), b1.end());

    if (question - 1) {
        sort(b2.begin(), b2.end(), greater<>());
    }
    else {
        sort(b2.begin(), b2.end());
    }

    int output = 0;
    for (int q=0;q<n;q++) output += max(b1[q], b2[q]);
    cout << output;
}