#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll a, b, m, n;
  cin >> a >> b >> n >> m;
  // N, picks vanilla when vanilla > chocolate otherwise chocolate. | lowers
  // equally M, picks chocolate when vanilla > chocolate otherwise vanilla. |
  // lowers inequally, m is more important
  if (min(a, b) >= m && a + b >= n + m)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
