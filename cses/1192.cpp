// Counting Rooms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, ans(0);
  cin >> n >> m; // bounds 0 - (n-1) rows , 0 - (m-1) columns
  vector<string> a(n);
  for (auto &e : a)
    cin >> e;

  vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
  vector<vector<bool>> v(n, vector<bool>(m, false));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == '.' && !v[i][j]) {
        ans++; // unique room
        queue<pair<int, int>> q;
        q.push({i, j});
        v[i][j] = true;
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for (auto d : dir) {
            int dx = x + d[0], dy = y + d[1];
            if (dx >= 0 && dx < n && dy >= 0 && dy < m && a[dx][dy] == '.' &&
                !v[dx][dy]) {
              q.push({dx, dy});
              v[dx][dy] = true;
            }
          }
        }
      }
    }
  }
  cout << ans;
}
