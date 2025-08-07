#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  ll ans(0);
  cin >> n;
  vector<int> a(n + 1);

  for (int i = 1; i <= n; i++)
    cin >> a[i];

  vector<int> v;
  for (int i = 1; i <= n; i++) {
    if (a[i] >= i)
      continue;
    ans += lower_bound(v.begin(), v.end(), a[i]) - v.begin();
    v.push_back(i);
  }

  cout << ans << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
