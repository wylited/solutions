#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int t;

void solve() {
  ll n;
  vector<ll> d;
  string s;
  cin >> n >> s;

  ll tot = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      d.push_back(i - (n - (i + 1)));
      tot += (n - (i + 1));
    } else {
      d.push_back((n - (i + 1)) - i);
      tot += i;
    }
  }
  sort(d.begin(), d.end(), greater<int>());
  for (int i = 0; i < n; i++) {
    if (d[i] > 0) {
      tot += d[i];
    }
    cout << tot << " ";
  }
  cout << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
