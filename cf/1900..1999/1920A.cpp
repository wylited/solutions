#include <bits/stdc++.h>

using namespace std;

int t, n, lb, ub, a, v, c;

void solve() {
  cin >> n;

  vector<int> ne;
  ub = INT_MAX;
  lb = 0;

  while (n--) {
    cin >> a >> v;

    if (a == 1) {
      lb = max(lb, v);
    } else if (a == 2) {
      ub = min(ub, v);
    } else {
      ne.push_back(v);
    }
  }
  c = ub - lb + 1;

  for (auto val : ne) {
    if (lb <= val && val <= ub) {
      c--;
    }
  }

  cout << ((c > 0) ? c : 0) << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
