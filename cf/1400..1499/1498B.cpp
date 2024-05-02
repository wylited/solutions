#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, W, c;
  multiset<int> w;
  cin >> n >> W;
  for (int i = 0; i < n; i++) {
    cin >> c;
    w.insert(c);
  }

  int curLayer(W), totLayer(1), i(0);
  while (!w.empty()) {
    i++;
    auto val = w.upper_bound(curLayer);
    if (val != w.begin()) {
      curLayer -= *(--val);
      w.erase(val);
    } else {
      totLayer++;
      curLayer = W;
    }
  }
  cout << totLayer << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
