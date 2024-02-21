#include <bits/stdc++.h>

using namespace std;

int t;
vector<long long> x(4), y(4);

void solve() {
  cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  cout << fixed << setprecision(0) << pow(x[0] - x[3], 2) << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
