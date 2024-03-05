#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> t;
  string c, o;
  int b, ans;
  ans = INT_MAX;

  while (true) {
    cin >> c;
    if (c[0] == '-')
      break;
    cin >> o >> b;
    if (o[0] == 'R' || o[0] == 'D') {
      t[c] -= b;
    } else {
      t[c] += b;
    }
  }

  for (auto pair : t) {
    ans = min(ans, pair.second);
  }
  cout << ans << endl;
}
