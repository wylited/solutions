#include <bits/stdc++.h>
using namespace std;
void solve() {
  string x, y;
  cin >> x >> y;
  int s(0);
  bool f(x > y);

  while (x[s] == y[s])
    s++;

  for (int i = x.size(); i > s; i--)
    if (!((x[i] > y[i]) ^ f))
      swap(x[i], y[i]);

  cout << x << endl << y << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
