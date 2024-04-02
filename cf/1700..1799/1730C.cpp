#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
  string s, smn, ans;
  cin >> s;
  long n = s.length();
  for (int i = n - 1; i >= 0; --i) {
    if (smn == "") {
      smn += s[i];
      ans += s[i];
      continue;
    }
    if (smn.back() >= s[i]) {
      smn += s[i];
      ans += s[i];
    } else {
      ans += s[i] == '9' ? '9' : s[i] + 1;
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
