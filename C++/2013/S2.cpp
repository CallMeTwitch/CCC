#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, n;cin >>w >> n;
    int weights[n + 3];weights[0] = 0;weights[1] = 0;weights[2] = 0;
    bool output = false;

    for (int q=0;q<n;q++) {
        cin >> weights[q + 3];
        if (weights[q] + weights[q + 1] + weights[q + 2] + weights[q + 3] > w) {
            if (not output) {
                cout << q;
                output = true;
            }
        }
    }
    if (not output) cout << n;
}