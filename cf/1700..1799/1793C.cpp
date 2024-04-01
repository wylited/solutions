#include <bits/stdc++.h>

using namespace std;

pair<int, int> minmax(const deque<int> d) {
  int minV, maxV = d.front();
  for (auto v : d) {
    if (v < minV)
      minV = v;
    if (v > maxV)
      maxV = v;
  }
  return make_pair(minV, maxV);
}

void solve() {
  int n, c;
  cin >> n;

  deque<int> a;
  for (int i = 0; i < n; i++) {
    cin >> c;
    a.push_back(c);
  }

  int l(1), r(n);
  while (a.front() != a.back()) {
    auto [small, large] = minmax(a);
    if (a.front() == small || a.front() == large) {
      a.pop_front();
      l++;
    } else if (a.back() == small || a.back() == large) {
      a.pop_back();
      r--;
    } else {
      cout << l << " " << r << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
