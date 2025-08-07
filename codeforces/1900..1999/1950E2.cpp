#include <bits/stdc++.h>

// NOT RIGHT CODE
// AN ATTEMPT BUT DOESNT ACTUALLY WORK

using namespace std;
int t, n;

void solve() {
  string s;
  cin >> n >> s;
  for (int i = 1; i <= (n / 2); i++) {
    if (n % i != 0) {
      continue;
    } else {
      string ss = s.substr(0, i);
      string c;
      for (int j = 0; j < n / i; j++) {
        c += ss;
      }

      auto a = inner_product(begin(s), end(s), begin(c), size_t(0), plus<>(),
                             not_equal_to<>());
      if (a <= 1) {
        cout << i << endl;
        return;
      }
    }
  }
  cout << n << endl;
}

int main() {
  cin >> t;
  while (t--)
    solve();
}
