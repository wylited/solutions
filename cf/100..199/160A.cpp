#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, i;
  cin >> n;
  vector<int> a(n, 0);
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater());

  for (i = 1; i < n; i++) {
    a[i] += a[i - 1];
  }

  for (i = 0; i <= n; i++) {
    if ((a[n - 1] - a[i]) < a[i]) {
      cout << i + 1;
      return;
    }
  }
}

int main() {
  solve();
  return 0;
}
