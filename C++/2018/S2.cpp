#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> array, int n) {
    vector<vector<int>> new_array;
    vector<int> layer;
    
    for (int q=0;q<n;q++) {
        layer = {};
        for (int w=0;w<n;w++) {
            layer.push_back(array[w][n - q - 1]);
        }
        new_array.push_back(layer);
    }
    return new_array;
}

int main() {
    int n;cin >> n;
    vector<vector<int>> array;
    vector<int> layer;
    int t;

    for (int q=0;q<n;q++) {
        layer = {};
        for (int w=0;w<n;w++) {
            cin >> t;
            layer.push_back(t);
        }
        array.push_back(layer);
    }

    while (not (array[0][0] < array[0][1] and array[0][0] < array[1][0])) {
        array = rotate(array, n);
    }

    for (auto layer:array) {
        for (auto item:layer) {
            cout << item << ' ';
        }
        cout << endl;
    }
}