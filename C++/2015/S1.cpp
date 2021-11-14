#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;cin >> k;
    vector<int> mem;

    for (int q=0;q<k;q++) {
        cin >> n;
        if (n == 0) {
            mem.pop_back();
        }
        else mem.push_back(n);
    }
    n = 0;
    for (int q :mem) {
        n += q;
    }
    cout << n;
}