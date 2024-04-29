#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, v;
  cin >> n >> k;
  vector<int> c(101, 0);

  for (int i = 0; i < n; i++) {
    cin >> v;
    c[v]++;
  }

  int fund = 0;
  for (int i = 1; i < 101; i++) {
    if (c[i] >= k) {
      fund += (k - 1) * c[i] / k;
      c[i] = c[i] % k;
    }
  }

  bool fc = true;
  while (fc) {
    for (int i = 1; i < 101; i++) {
      fc = false;
      if (c[i] > 0) {
        int diff = k - c[i];
        if (diff <= fund) {
          fund -= diff;
          fund += k - 1;
          c[i] = 0;
          fc = true;
        }
      }
    }
  }

  if (fund >= k) {
    fund = k - 1;
  }

  cout << accumulate(c.begin(), c.end(), 0) + fund << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
