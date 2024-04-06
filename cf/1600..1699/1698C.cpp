#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string solve() {
  int n, c;
  cin >> n;
  vector<ll> pos, neg, a;
  bool b(false);

  for (int i = 0; i < n; i++) {
    cin >> c;
    if (c > 0)
      pos.push_back(c);
    else if (c < 0)
      neg.push_back(c);
    else if (a.size() < 2)
      a.push_back(c);
  }

  if (pos.size() > 2 || neg.size() > 2)
    return "NO\n";

  a.insert(a.end(), pos.begin(), pos.end());
  a.insert(a.end(), neg.begin(), neg.end());

  if (a.size() < 3)
    return "YES\n";

  n = a.size();

  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      for (int k = j + 1; k < n; k++)
        if (find(a.begin(), a.end(), a[i] + a[j] + a[k]) == a.end())
          return "NO\n";

  return "YES\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    cout << solve();
  return 0;
}
