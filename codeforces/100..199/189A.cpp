#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, c, m(0);
  cin >> n;
  cin >> a >> b >> c;
  for (int x = 0; x <= n; x++) {
    for (int y = 0; y <= n; y++) {
      if ((n - a * x - b * y) % c == 0 && (a * x + b * y) <= n)
        m = max(m, x + y + ((n - a * x - b * y) / c));
    }
  }
  cout << m;
}
