#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n, o(0);
  string s;
  cin >> n >> s;
  for (char c : s)
    o += c - '0';

  if (o == 2 && s.find("11") != string::npos)
    return "NO\n";
  else if (o % 2)
    return "NO\n";
  else
    return "YES\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    cout << solve();
  return 0;
}
