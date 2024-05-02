#include <bits/stdc++.h>
using namespace std;

int t;

void solve() {
  int x, p;
  cin >> x;
  vector<int> ans;
  ans.push_back(x);

  for (int i = 0;; i++) {
    if (x & (1 << i)) {
      if (x == 1 << i) {
        p = i;
        break;
      }
      x -= 1 << i;
      ans.push_back(x);
    }
  }

  while (p > 0) {
    x -= (1 << (p - 1));
    ans.push_back(x);
    --p;
  }

  cout << ans.size() << endl;
  for (auto e : ans)
    cout << e << " ";
  cout << endl;
}

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
