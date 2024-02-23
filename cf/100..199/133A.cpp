#include <bits/stdc++.h>

using namespace std;

int t;

void solve() {
  string p;
  cin >> p;
  for (char c : p) {
    if (c == 'H' || c == 'Q' || c == '9') {
      cout << "YES";
      return;
    }
  }
  cout << "NO";
}

int main() {
  solve();
  return 0;
}
