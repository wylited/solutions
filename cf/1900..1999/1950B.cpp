#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  vector<string> a = {"##", ".."};
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s = "";
    for (int j = 0; j < n; j++) {
      if (j % 2 == 0) {
        s += a[i % 2];
      } else {
        s += a[!(i % 2)];
      }
    }
    cout << s << endl << s << endl;
  }
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
