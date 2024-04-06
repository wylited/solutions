#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, i, j, r(0);
  cin >> n;
  vector<int> a(n);
  for (i = 0; i < n; i++)
    cin >> a[i];
  cin >> m;
  vector<int> b(m);
  for (i = 0; i < m; i++)
    cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (abs(a[i] - b[j]) <= 1) {
        b[j] = -2;
        r++;
        break;
      }
    }
  }
  cout << r;
}
