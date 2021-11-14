#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m;cin >> n;
    vector<bool> f(n, true);
    
    cin >> m;
    for (int q=0;q<m;q++) {
        cin >> k;
        int cnt = 0;
        for (int w=0;w<n;w++) {
            if (f[w]) cnt++;
            if (cnt == k) {
                cnt = 0;
                f[w] = false;
            }
        }
    }
    for (int q=0;q<n;q++) {
        if (f[q]) cout << q + 1 << endl;
    }
}