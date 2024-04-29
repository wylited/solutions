#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  vector<int> a[26];
  int i(0);
  for (char c : s) {
    a[c - 'a'].push_back(i);
    i++;
  }
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
