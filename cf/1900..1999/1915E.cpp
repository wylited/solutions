#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n;

bool validator(const std::vector<ll>& g) {
    ll n = g.size();
    std::unordered_map<ll, ll> ps;
    ll so = 0, se = 0;
    ps[0] = -1;

    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) {
            se += g[i];
        } else {
            so += g[i];
        }

        ll diff = so - se;
        if (ps.count(diff) && i - ps[diff] > 1) {
            return true;
        }

        if (!ps.count(diff)) {
            ps[diff] = i;
        }
    }

    return false;
}

void solve() {
  cin >> n;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << (validator(a) ? "YES" : "NO") << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
