#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int q, n, t;cin >> q >> n;
    vector<int> one, two;

    for (int w=0;w<n;w++) {
        cin >> t;
        one.push_back(t);
    }

    for (int w=0;w<n;w++) {
        cin >> t;
        two.push_back(t);
    }

    sort(one.begin(), one.end());

    int output = 0;
    if (q == 1) sort(two.begin(), two.end());
    else sort(two.begin(), two.end(), greater<int>());

    for (int w=0;w<n;w++) {
        output += max(one.back(), two.back());
        one.pop_back();two.pop_back();
    }

    cout << output;
}