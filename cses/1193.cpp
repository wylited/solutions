// Labyrinth
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define f first
#define s second

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);

  pii beg{-1, -1}, end{-1, -1}, inv{-1, -1};
  vector<int> dx{0, 0, 1, -1}, dy{1, -1, 0, 0};
  string e, step("RLDU");

  for (int i = 0; i < n; i++) {
    cin >> e;
    if (e.find('A') != string::npos && beg == inv)
      beg = make_pair(i, e.find('A'));
    if (e.find('B') != string::npos && end == inv)
      end = make_pair(i, e.find('B'));
    a[i] = e;
  }

  queue<pii> q;
  vector<vector<bool>> v(n, vector<bool>(m, false));
  vector<vector<int>> prevd(n, vector<int>(m, -1));

  q.push(beg);
  v[beg.f][beg.s] = true;

  while (!q.empty()) {
    pii c = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = c.f + dx[i], ny = c.s + dy[i];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m || v[nx][ny] ||
          a[nx][ny] == '#')
        continue;

      v[nx][ny] = true;
      prevd[nx][ny] = i;
      q.push(make_pair(nx, ny));
    }
  }

  if (v[end.f][end.s]) {
    cout << "YES" << endl;
    pii c = end;
    int cnt(0);
    string path;
    while (c != beg) {
      int d = prevd[c.f][c.s];
      path += step[d];
      c = make_pair(c.f - dx[d], c.s - dy[d]);
      cnt++;
    }
    reverse(path.begin(), path.end());
    cout << cnt << endl << path << endl;
  } else
    cout << "NO" << endl;
}
