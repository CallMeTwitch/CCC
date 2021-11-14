#include <bits/stdc++.h>

using namespace std;

int main() {  
  cin.tie(0);
  int low = 0, high = 0, n;cin >> n;
  vector<int> p(n), w(n), d(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i] >> w[i] >> d[i];
    high = max(high, p[i]);
  }
  auto check = [&](int pos) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] + d[i] < pos) sum += (long long) abs(p[i] - (pos - d[i])) * w[i];
        else if (p[i] - d[i] > pos) sum += (long long) abs(p[i] - (pos + d[i])) * w[i];
    }
    return sum;
  };  

  while (low + 1 < high) {
    int mid = (low + high) >> 1;  
    if (check(mid) < check(mid - 1)) low = mid + 1;
    else high = mid - 1;
  } 
  cout << min(check(low), check(high)) << '\n';
  return 0;
}