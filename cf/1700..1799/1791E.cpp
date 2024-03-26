#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll t;
void solve() {
  ll n;
  cin >> n;
  vector<ll> vals(n, 0);
  ll tot = 0;
  ll neg = 0;
  bool zero = false;
  for (ll i = 0; i < n; i++) {
    cin >> vals[i];
    if (vals[i] < 0) {
      neg++;
    } else if (vals[i] == 0) {
      zero = true;
    }
    vals[i] = abs(vals[i]);
    tot += vals[i];
  }
  sort(vals.begin(), vals.end());
  if (neg % 2 != 0 && !zero) {
    tot -= 2 * vals[0];
  }
  cout << tot << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
