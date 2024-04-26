#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c, t(0);

  vector<int> a[100005];
  unordered_set<int> skip;

  ostringstream out;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> c;
    if (skip.count(c) > 0)
      continue;
    else if (a[c].size() < 2)
      a[c].push_back(i);
    else if (a[c][1] - a[c][0] == i - a[c].back())
      a[c].push_back(i);
    else
      skip.insert(c);
  }

  for (int c = 1; c < 100005; c++) {
    if (skip.count(c) > 0 || a[c].size() == 0)
      continue;
    else if (a[c].size() == 1)
      out << c << " " << 0 << endl;
    else
      out << c << " " << a[c][1] - a[c][0] << endl;
    t++;
  }

  cout << t << endl << out.str();
  return 0;
}
