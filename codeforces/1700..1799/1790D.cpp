#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, a[1000000005], c;
  memset(a, 0, 1000000005);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> c;
    a[c]++;
  }

  int smax(-1), tot(0);
  bool ss(false);
  for (int i = 1000000000; i > 0; i--) {
    if (a[c] == 0 && !ss)
      continue;
    else if (a[c] == 0 && ss) {
      tot += smax + 1;
      ss = false;
    } else if (ss) {
      smax = max(smax, a[c]);
    }
  }
}
int t;
