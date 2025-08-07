#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int_fast32_t> a(n);
  for (int_fast32_t &e : a)
    cin >> e;
  sort(a.begin(), a.end());
  int MAX = a[n - 1];
  int mex = 1;
  for (int i = 0; i < n; i++)
    if (a[i] == mex)
      mex++;
  if (mex > MAX)
    cout << (MAX % 2 ? "Alice" : "Bob") << endl;
  else {
    cout << (mex % 2 ? "Alice" : "Bob") << endl;
  }
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
