#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pb(x) push_back(x);

void solve() {
  ll n, q, x;
  cin >> n >> q >> x;
  vector<ll> a{0, x};
  vector<ll> pm{x};

  for (int i = 1; i < n; i++) {
    cin >> x;
    pm.push_back(max(x, pm.back()));
    a.push_back(x + a.back());
  }

  for (int i = 0; i < q; i++) {
    int k;
    cin >> k;
    int pos = upper_bound(pm.begin(), pm.end(), k) - pm.begin();
    cout << a[pos] << " ";
  }
  cout << endl;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
