#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  if (!(n % 2)) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  int o(n + 1);
  int e(o + ((n + 1) / 2));

  for (int i = n; i > 0; i--) {
    if (i % 2) {
      cout << i << " " << o << endl;
      o++;
    } else {
      cout << i << " " << e << endl;
      e++;
    }
  }
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
