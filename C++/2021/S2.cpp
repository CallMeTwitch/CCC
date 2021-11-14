#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, k;cin >> m;cin >> n;cin >> k;
    vector<int> rows(m, 0); vector<int> columns(n, 0);

    for (int q = 0; q < k; q++) {
      char rc;cin >> rc;int index;cin >> index;index--;
      if (rc == 'R') {
        rows[index] = ~rows[index];
      }
      else {
        columns[index] = ~columns[index];
      }
    }

    int output = 0;
    for (int q = 0; q < n; q++) for (int w = 0; w < m; w++) {
      output += columns[q] ^ rows[w];
    }
    cout << abs(output);
}