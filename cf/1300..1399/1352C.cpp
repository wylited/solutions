#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
  ll n, k;
  cin >> n >> k;
  ll low(1), high(k * n), result(-1);
  while (low <= high) {
    ll mid = low + (high - low) / 2;
    if (mid - mid / n >= k) {
      result = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  cout << result << endl;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
