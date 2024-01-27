#include <bits/stdc++.h>

using namespace std;

int W, n;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> W >> n;
  int w[n], b[n - 4];
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  for (int i = 4; i < (n - 4); i++) {
    if (w[i] + w[i - 1] + w[i - 2] + w[i - 3] > W) {
      cout << i;
    }
  }

  return 0;
}
