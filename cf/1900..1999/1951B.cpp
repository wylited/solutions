#include <bits/stdc++.h>
using namespace std;

int wins(vector<int> a, int n, int k) {
  int res(0);
  int m = *max(a.begin(), a.begin() + k);
  if (a[k] > m)
    res += 1;
  int i = k + 1;
  while (a[k] > a[i] && i < n)
    i++;
  res += i - k;
  return res;
}

void solve() {
  int n, k, m(0), i;
  vector<int> a(n, 0);
  for (i = 0; i < k; i++)
    cin >> a[i];
  m = *max(a.begin(), a.end());
  for (i = k; i < n; i++)
    cin >> a[i];
  if (m < a[k])
    swap(a[1], a[k]);
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
