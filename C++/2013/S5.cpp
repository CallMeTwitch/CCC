#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c = 0;cin >> n;

    while (n - 1) {
      for (int q=2;q<=n;q++) {
        if (n % q == 0) {
          c += (q - 1);
          n -= n/q;
          break;
        }
      }
    }
    cout << c;
}