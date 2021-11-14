#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string a, b;cin >> a >> b;
    char output = 'A';

    if (a.size() != b.size()) output = 'N';
    else {
        for (char q:b) {
          if (q != '*') {
              if (a.find(q) != string::npos) {
                  a.erase(a.begin() + a.find(q));
              }
              else {
                  output = 'N';
                  break;
              }
          }
        }
    }
    cout << output;
}