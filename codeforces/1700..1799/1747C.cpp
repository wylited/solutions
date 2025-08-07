#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
void solve() {
  ll n;
  int a, m, t;
  cin >> n >> a >> m;
  for (int i = 2; i < n; i++) {
    cin >> t;
    m = min(m, t);
  }
  if (a > m) {
    cout << "Alice" << endl;
  } else {
    cout << "Bob" << endl;
  }
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
