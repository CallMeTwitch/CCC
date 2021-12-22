#include <bits/stdc++.h>

using namespace std;

int find_all(map<int, vector<int>> roads, vector<int> to_find, int curr, int n) {
    if (to_find.size() == 0) return n;
    int m = 1e6+5;
    for (auto q:roads[curr]) {
        if (find(to_find.begin(), to_find.end(), q) == to_find.end()) m = min(m, find_all(roads, to_find, q, n + 1));
        else {
            vector<int> temp = to_find;
            temp.erase(find(temp.begin(), temp.end(), q));
            m = min(m, find_all(roads, temp, q, n + 1));
        }
    }
    return m;
}

int main() {
    int n, m, a, b;cin >> n >> m;
    vector<int> p;
    map<int, vector<int>> roads;

    for (int q=0;q<m;q++) {
        cin >> a;
        p.push_back(a);
    }

    for (int q=0;q<n;q++) {
        cin >> a >> b;
        if (roads.find(a) == roads.end()) roads[a] = {b};
        else roads[a].push_back(b);
        if (roads.find(b) == roads.end()) roads[b] = {a};
        else roads[b].push_back(a);
    }
    m = 1e6+5;
    for (auto q:roads) {
        m = min(m, find_all(roads, p, q.first, 0));
    }
    cout << m;
}