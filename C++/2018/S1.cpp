#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin >> n;
    double v[n];
    double m = 2000000000;

    for (int q=0;q<n;q++) cin >> v[q];
    sort(v, v+n);
    for (int q=1;q+1<n;q++) {
        m = min(m, ((v[q] - v[q - 1]) / 2) + ((v[q + 1] - v[q]) / 2));
    }

    cout << fixed << setprecision(1) << m;
}