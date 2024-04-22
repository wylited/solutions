#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll n, l, r, c;
  cin >> n >> l >> r;
  vector<int> a;

  for (int i = 0; i < n; i++) {
    cin >> c;
    if (c < r)
      a.push_back(c);
  }

  sort(a.begin(), a.end());

  c = 0;
  for (int i = 0; i < n; i++)
    c += upper_bound(a.begin(), a.end(), r - a[i]) - // max value that fits
         lower_bound(a.begin(), a.end(), l - a[i]) - // min value
         (l <= 2 * a[i] && 2 * a[i] <= r); // remove for double elements?

  cout << c / 2 << "\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
