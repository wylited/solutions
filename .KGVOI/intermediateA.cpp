#include <bits/stdc++.h>

using namespace std;

double x, y, n, k, s;

int main() {
  cin >> x >> y;
  vector<int> m(y, 0);

  for (int i = 0; i < y; i++) {
    cin >> m[i];
  }

  sort(m.begin(), m.end());

  cin >> n;
  k = ceil(n * y / 100);

  for (int i = 0; i < k; i++) {
    s += m[i];
  }

  cout << s << " " << k << endl;

  return 0;
}
