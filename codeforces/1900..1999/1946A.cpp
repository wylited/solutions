#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, i;
  cin >> n;
  vector<int> a(n);
  for (auto &e : a)
    cin >> e;

  sort(a.begin(), a.end());

  i = (n + 1) / 2 - 1;
  cout << count(a.begin() + i, a.end(), a[i]) << endl;
}
int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
