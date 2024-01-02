#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m, c, v;

void solve() {
  int vals[32]; // fix later

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> c >> v;
    if (!(c - 1)) {
      vals[v]++;
    } else {
      if (v == 0) {
        cout << "YES\n";
      } else if (accumulate(vals.begin(), vals.end(), 0) < v) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
  }
}

int main() {
  solve();
  return 0;
}
