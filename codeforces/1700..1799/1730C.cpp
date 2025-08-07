#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
  string s, smn, ans;
  char c;
  cin >> s;
  for (auto i = s.rbegin(); i != s.rend(); i++) {
    c = *i;
    if (smn == "") {
      smn += c;
      ans += c;
    } else if (smn.back() >= c) {
      smn += c;
      ans += c;
    } else
      ans += c == '9' ? '9' : c + 1;
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
