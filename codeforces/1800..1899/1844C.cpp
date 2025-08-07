#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, c;
  long long odd, even;
  cin >> n;
  vector<int> a;
  bool allneg(true);
  for (int i = 0; i < n; i++) {
    cin >> c;
    allneg &= (c < 0);
    a.push_back(c);
  }

  odd = even = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2)
      odd += max(a[i], 0);
    else
      even += max(a[i], 0);
  }

  if (allneg)
    cout << *max_element(a.begin(), a.end()) << endl;
  else
    cout << max(odd, even) << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
