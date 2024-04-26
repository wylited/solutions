#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  int s(0), f(0);
  vector<int> v(9, 0);
  cin >> n; // at most a 9 digit number
  for (auto c : n) {
    if (c == '7') {
      v.push_back(7);
    }
    if (c > '4') {
      v.push_back(7);
      s++;
    }
    if (c == '4') {
      v.push_back(4);
      f++;
    }
  }
}
