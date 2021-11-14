#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;cin >> n;
    vector<int> input;

    for (int q=0;q<n;q++) {
        cin >> t;
        input.push_back(t);
    }

    sort(input.begin(), input.end());

    if (n % 2 == 0) {
        int start = n/2 - 1;
        int end = start + 1;
        for (int q=0;q<n/2;q++) {
            cout << input[start] << ' ' << input[end] << ' ';
            start--;end++;
        }
    }
    else {
        int start = n/2;
        int end = start + 1;
        for (int q=0;q<n/2;q++) {
            cout << input[start] << ' ' << input[end] << ' ';
            start--;end++;
        }
        cout << input[start];
    }
}