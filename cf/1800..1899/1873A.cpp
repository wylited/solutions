#include <bits/stdc++.h>

using namespace std;

int t;

void solve() {
  string s;
  cin >> s;
  if ((s[0] > s[1] && s[1] > s[2]) || s[2] > s[0]) { // logical analysis
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
