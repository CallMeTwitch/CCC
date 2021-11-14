#include <bits/stdc++.h>

using namespace std;

int main() {
    int length, sum = 0;cin >> length;
    vector<int> height(length + 1), width(length);

    for (int i = 0; i <= length; i++) cin >> height[i];
    for (int i = 0; i < length; i++) cin >> width[i];

    for (int i = 0; i < length; i++) sum += width[i] * (height[i] + height[i + 1]);
    cout << fixed << setprecision(5) << sum / 2.0;
}