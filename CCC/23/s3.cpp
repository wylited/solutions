#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, r, c;
  cin >> n >> m >> r >> c;
  vector<vector<char>> ans(n, vector<char>(m));

  if (r == n) {
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        ans[i][j] = 'a';
    if (m % 2 && c % 2) {
      ans[1][c / 2] = 'b';
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < r || j < c)
        ans[i][j] = 'a';
      else
        ans[i][j] = 'b';
    }
  }
}
