#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve() {
  ll n, k, ans;
  cin >> n >> k;
  ans = n;
  for (ll i = 1; i <= sqrt(n); ++i)
    if (n % i == 0) {
      if (i <= k)
        ans = min(ans, n / i);
      if (n / i <= k)
        ans = min(ans, i);
    }
  return ans;
}

int t;

int main() {
  cin >> t;
  while (t--)
    cout << solve() << endl;
  return 0;
}
