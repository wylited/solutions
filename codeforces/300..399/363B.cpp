#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, t;
  vector<int> a;
  cin >> n >> k;
  a.push_back(0);
  for (int i = 0; i < n; i++) {
    cin >> t;
    a.push_back(a[i] + t);
  }

  int m, r;
  m = 100000000;
  for (int i = 0; i <= n - k; i++) {
    if (a[i + k] - a[i] < m) {
      m = a[i + k] - a[i];
      r = i;
    }
  }
  cout << r + 1;
}
