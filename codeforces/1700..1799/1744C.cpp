#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, e(0), a(0);
  bool f(false);
  char c;
  string s;

  cin >> n >> c >> s;
  s += s; // uncycle

  for (int i = 0; i < n * 2; i++) {
    if (s[i] == c)
      f = true;
    else if (s[i] == 'g') {
      a = max(a, e);
      e = 0;
      f = false;
    }
    if (f)
      e++;
  }
  cout << a << endl;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
