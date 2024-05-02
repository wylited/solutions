#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  const int mod = 1e9 + 7;
  int n, k, sum(0), max(LONG_LONG_MIN), maxl(0)`;
  cin >> n >> k;
  vector<int> a(n);

  for (auto &e : a) {
    cin >> e;
    sum += e;
  }
  for (int i = 0; i < n; i++) {
    maxl += a[i];
    if (max < maxl)
      max = maxl;
    if (maxl < 0)
      maxl = 0;
  }
  sum = (sum % mod + mod) % mod;
  max %= mod;
  cout << (sum + (k * k) * max - max) % (1e9 + 7) << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
