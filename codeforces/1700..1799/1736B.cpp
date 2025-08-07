#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int lcm(int a, int b) { return (a * b) / __gcd(a, b); }

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 2, 1), b(n + 2, 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= n + 1; i++) {
    b[i] = lcm(a[i], a[i - 1]);
  }

  for (int i = 1; i <= n; i++) {
    if (a[i] != __gcd(b[i], b[i + 1])) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
  return;
}

int t;

int main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}
