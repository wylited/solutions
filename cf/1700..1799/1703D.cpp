#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  string s, t, binary;
  binary = "";
  cin >> n;
  cin >> s;
  vector<int> f, b;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t[0] == s[0]) {
      f.push_back(t.length());
    }
    if (t.back() == s.back()) {
      b.push_back(t.length());
    }
  }

  sort(f.begin(), f.end());
  sort(b.begin(), b.end());

  for (int i = 1; i < n; i++) {
    if (find(f.begin(), f.end(), i) != f.end() &&
        find(b.begin(), b.end(), n - i) != b.end()) {
      binary += '1';
    } else {
      binary += '0';
    }
  }
  cout << binary;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
