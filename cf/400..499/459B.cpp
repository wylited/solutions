#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> b(n, 0);
  for (auto &e : b)
    cin >> e;

  int mx = *max(b.begin(), b.end());
  int mn = *min(b.begin(), b.end());

  if (mx == mn)
    cout << "0 " << n * (n - 1) / 2 << endl;
  else
    cout << mx - mn << " "
         << count(b.begin(), b.end(), mx) * count(b.begin(), b.end(), mn)
         << endl;
}
