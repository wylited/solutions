#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, c, m(0);
  cin >> n;
  cin >> a >> b >> c;
  for (int x = 0; x <= n; x++) {
    for (int y = 0; y <= n; y++) {
      int zc = (n - a * x + b * y);
      if (zc % c == 0) {
        if (zc + a * x + b * y == n) {
          m = max(m, ((n - a * x + b * y) / c) + x + y);
        }
      }
    }
  }
  cout << m;
}
