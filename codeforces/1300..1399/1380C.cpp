#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x, ans(0), s, i, count(1);
  vector<int> a;
  cin >> n >> x;

  for (i = 0; i < n; i++) {
    cin >> s;
    a.push_back(s);
  }

  sort(a.begin(), a.end(), greater<int>());

  for (auto e : a) {
    if (e * count >= x) {
      ans++;
      count = 0;
    } else
      count++;
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
