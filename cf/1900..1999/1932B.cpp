#include <bits/stdc++.h>

using namespace std;

int t, n, temp;

void solve() {
  cin >> n;
  cin >> temp;
  int prev_max = temp;
  for (int i = 1; i < n; i++) {
    int curr = 1;
    cin >> temp;
    while (curr * temp <= prev_max) {
      curr++;
    }
    prev_max = curr * temp;
  }
  cout << prev_max << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
