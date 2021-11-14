#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    for (int q=2;q<sqrt(n)+1;q++) {
      if (n % q == 0) return false;
    }
    return true;
}

int main() {
    int n, t, w;cin >> n;

    for (int q=0;q<n;q++) {
        cin >> t;w = 1;
        while (not prime(t - w) || not prime(t + w)) w++;
        cout << t - w << ' ' << t + w << endl;
    }
}