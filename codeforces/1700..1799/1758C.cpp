#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, x, i;
  cin >> n >> x;
  m = n;

  if (n % x != 0) {
    cout << -1 << endl;
    return;
  }

  queue<int> pf;
  n /= x;

  while (n % 2 == 0) {
    pf.push(2);
    n /= 2;
  }

  for (i = 3; i < sqrt(n); n++) {
    if (n % i == 0) {
      pf.push(i);
      n /= i;
    }
  }

  cout << x << " ";
  for (i = 2; i < m; i++) {
    if (i == x) {
      if (pf.empty())
        cout << n << " ";
      else {
        cout << i * pf.front() << " ";
        x = i * pf.front();
        pf.pop();
      }
    } else
      cout << i << " ";
  }
  cout << 1 << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
