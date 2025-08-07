#include <bits/stdc++.h>

using namespace std;

float t, n;
string s;

void solve() {
  cin >> n >> s;
  vector<float> v(n - 1, 0);
  v[0] = s[0] - '0';
  int ans = -10000000;

  for (float i = 0; i < n; i++) {
    v[i] = v[i - 1] + (s[i] - '0');
  }

  for (float i = 1; i <= n; i++) {
    bool lsat = ((i - v[i - 1]) > ceil(i / 2));
    bool rsat = ((v[n - 1] - v[i - 1]) >= ceil((n - i) / 2));
    // cout << (i - v[i - 1]) << "|" << ceil(i / 2) << " " << (v[n - 1] - v[i -
    // 1])
    //      << "|" << ceil((n - i) / 2) << endl;
    // cout << lsat << " " << rsat << endl;
    if (lsat && rsat) {
      ans = abs(n / 2 - i) < abs(n / 2 - ans) ? i : ans;
    }
  }

  cout << (ans == -10000000 ? 0 : ans) << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
