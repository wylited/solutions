#include <bits/stdc++.h>

using namespace std;

int t, n;

void solve() {
  cin >> n;
  char output[3];

  if (n > 27) {
    n -= 26;
    output[2] = 26;
    if (n > 27) {
      output[1] = 26;
      n -= 26;
      output[0] = n;
    } else {
      output[1] = n - 1;
      output[0] = 1;
    }
  } else {
    output[2] = n - 2;
    output[1] = 1;
    output[0] = 1;
  }

  output[0] += 'a' - 1;
  output[1] += 'a' - 1;
  output[2] += 'a' - 1;

  cout << output << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
