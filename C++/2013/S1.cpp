#include <bits/stdc++.h>

using namespace std;

bool check(int year) {
    vector<int> done;
    while (year) {
        int curr = year % 10;
        if (find(done.begin(), done.end(), year % 10) != done.end()) return false;
        done.push_back(year % 10);
        year /= 10;
    }
    return true;
}

int main() {
    int year;cin >> year;
    year++;

    while (not check(year)) {
        year++;
    }
    cout << year;
}