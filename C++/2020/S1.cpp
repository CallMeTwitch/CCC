#include <bits/stdc++.h>

using namespace std;

int main() {
    int time, pos, n;cin >> n;
    map<int, int> speeds;
    double m = 0.0;

    for (int q=0;q<n;q++) {
        cin >> time >> pos;
        speeds[time] = pos;
    }
    for (auto q = speeds.begin();next(q)!=speeds.end();q++) {
        m = max(m, abs(double(next(q)->second - q->second) / double(next(q)->first - q->first)));
    }
    cout << fixed << setprecision(1) << m;
}