#include <bits/stdc++.h>

using namespace std;

int t, n;

void solve() {
  cin >> n;
  string s;
  int thornconsec = 0;
  int coin = 0;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == '@') {
      coin++;
      thornconsec = 0;
    } else if (s[i] == '.') {
      thornconsec = 0;
    } else {
      thornconsec++;
    }
    if (thornconsec >= 2) {
      break;
    }
  }
  cout << coin << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
