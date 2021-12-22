#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, r, c;cin >> r >> c;

    map<int, vector<int>> dict;
    for (int x = 1;x <= r;x++) {
        for (int y = 1;y <= c;y++) {
            cin >> t;
            if (dict.find(x * y) == dict.end()) dict[x * y] = {t};
            else dict[x * y].push_back(t);
        }
    }

    set<int> new_, done = {1}, current = {1};
    while (not current.empty()) {
        new_ = {};
        for (auto q:current) {
            if (dict.find(q) != dict.end()) {
                for (auto w: dict[q]) {
                    if (not done.count(w)) {
                        done.insert(w);
                        new_.insert(w);
                    }
                }
            }
        }
        current = new_;
        if (current.find(r * c) != current.end()) {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
}