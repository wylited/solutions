#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n, k, val;
  char choice;
  cin >> m >> n >> k;

  vector<int> r(m, 0), c(n, 0);

  for (int i = 1; i <= k; i++) {
    cin >> choice >> val;
    if (choice == 'R')
      r[val - 1]++;
    else
      c[val - 1]++;
  }

  int gold = 0;

  for (int i : r) {
    for (int j : c) {
      if ((i + j) % 2)
        gold++;
    }
  }

  cout << gold;
  return 0;
}
