#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main() {
  int n, s;
  cin >> n;

  vi p(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> p[i];

  for (int i = 1; i <= n; i++) {
    vi c(n + 1, 0);
    s = i;
    while (c[s] <= 1) {
      c[s]++;
      s = p[s];
    }
    cout << s << " ";
  }
}
