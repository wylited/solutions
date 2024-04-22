#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a(0), b(0), c(0);
  cin >> n;

  for (int i = 2; i * i < n; i++) {
    if (n % i == 0) {
      n /= i;
      a = i;
      break;
    }
  }

  for (int i = 2; i * i < n; i++) {
    if (n % i == 0 && i != a) {
      n /= i;
      b = i;
      break;
    }
  }
  if (a != b && a > 1 && b > 1)
    cout << "YES\n" << a << " " << b << " " << n << endl;
  else
    cout << "NO\n";
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
