#include <bits/stdc++.h>

using namespace std;

void solve() {
  long a, b, c;
  cin >> a >> b >> c;
  a += floor(b / 3);
  c += b % 3;
  if (c < 3 && b % 3 != 0) {
    cout << -1 << endl;
    return;
  }
  a += (c + 3 - 1) / 3;
  cout << a << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
