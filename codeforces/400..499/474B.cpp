#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, c;
  cin >> n;
  vector<int> a(n);
  cin >> a[0];
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> c;
    cout << lower_bound(a.begin(), a.end(), c) - a.begin() + 1 << endl;
  }
}
