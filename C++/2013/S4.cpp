#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, y, p, q;cin >> n >> m;

    map<int, vector<int>> heights;
    for (int q=0;q<m;q++) {
        cin >> x >> y;
        if (heights.find(x) == heights.end()) heights[x] = {y};
        else heights[x].push_back(y);
    }

    cin >> p >> q;
    set<int> new_, done = {p}, current = {p};

    while (not current.empty()) {
        new_ = {};
        for (auto e:current) {
            for (auto w:heights[e]) {
                if (not done.count(w)) {
                    new_.insert(w);
                    done.insert(w);
                }
            }
        }
        current = new_;
        if (current.count(q)) {
            cout << "yes";
            return 0;
        }
    }
    done = {q}, current = {q};

    while (not current.empty()) {
        new_ = {};
        for (auto e:current) {
            for (auto w:heights[e]) {
                if (not done.count(w)) {
                    new_.insert(w);
                    done.insert(w);
                }
            }
        }
        current = new_;
        if (current.count(p)) {
            cout << "no";
            return 0;
        }
    }
    cout << "unknown";
}