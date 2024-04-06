#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, l(0), r(0);
  cin >> n;
  vector<long> a(n + 1);
  cin >> a[1];

  for (int i = 2; i <= n; ++i) {
    cin >> a[i];
    if (a[i] < a[i - 1]) {
      l = l ? l : i;
      r = i;
    }
  }
  if (l == 0 && r == 0) {
    cout << "yes\n1 1\n";
    return 0;
  }

  reverse(a.begin() + l - 1, a.begin() + r + 1);

  for (int i = 1; i < n; ++i) {
    if (a[i] >= a[i + 1]) {
      cout << "no\n";
      return 0;
    }
  }
  cout << "yes\n" << l - 1 << " " << r << endl;
  return 0;
}
