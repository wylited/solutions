#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int minmax = 0;          // minimum of ceiling average of all pairs
  int maxmin = 1000000000; // maximum of the floor average of all pairs

  for (int i = 0; i < n - 1; i++) {
    if (a[i] < a[i + 1])
      maxmin = min(maxmin, (a[i] + a[i + 1]) / 2);
    if (a[i] > a[i + 1])
      minmax = max(minmax, (a[i] + a[i + 1] + 1) / 2); // ceil
  }

  if (minmax > maxmin)
    cout << -1 << endl;
  else
    cout << minmax << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
