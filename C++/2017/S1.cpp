#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin >>n;
    int a[n], b[n];

    for (int q=0;q<n;q++) cin >> a[q];
    for (int q=0;q<n;q++) cin >> b[q];

    int sum = 0, output = 0;
    for (int q=0;q<n;q++) {
        sum += a[q] - b[q];
        if (sum == 0) output = q + 1;
    }
    cout << output;
}