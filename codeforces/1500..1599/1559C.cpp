#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 2);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  if (a[1]) {
    cout << n + 1;

    for (int i = 1; i <= n; i++)
      cout << " " << i;
    cout << endl;
    return;
  }

  for (int i = 1; i < n; i++) {
    if (!a[i] && a[i + 1]) { // find jump to n+1 rq.
      for (int j = 1; j <= i; j++)
        cout << j << " ";
      cout << n + 1 << " ";
      for (int j = i + 1; j <= n; j++)
        cout << j << " ";
      cout << endl;
      return;
    }
  }

  for (int i = 1; i <= n; i++)
    cout << i << " ";
  cout << n + 1 << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
