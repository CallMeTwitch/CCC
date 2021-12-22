#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, temp;cin >> t;

    for (int q=0;q<t;q++) {
        vector<int> mountain, branch = {0};
        cin >> n;
        for (int w=0;w<n;w++) {
            cin >> temp;
            mountain.push_back(temp);
        }

        int count = 1;
        bool done = false;
        while (count != n) {
            done = true;
            if (mountain.back() == count) {
                mountain.pop_back();
                count ++;
            }
            else if (branch.back() == count) {
                branch.pop_back();
                count ++;
            }
            else if (mountain.size() > 0) {
                branch.push_back(mountain.back());
                mountain.pop_back();
            }
            else break;
        }
        if (count == n) cout << "Y\n";
        else cout << "N\n";
    }
}