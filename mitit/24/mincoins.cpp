#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<int, pii> pipii;

const int INF = numeric_limits<int>::max();

int m, n, a, b, c, r;

void solve() {
  cin >> n >> m;
  vector<vector<pair<int, int>>> tunnels(n + 1);

  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c >> r;
    tunnels[a].push_back({b, c});
    tunnels[b].push_back({a, r});
  }

  vector<int> dist(n + 1, INF);
  dist[1] = 0;

  priority_queue<pipii, vector<pipii>, greater<pipii>> pq;
  pq.push({0, {1, 0}});

  while (!pq.empty()) {
    int curr_building = pq.top().second.first;
    int curr_coins = pq.top().second.second;
    pq.pop();

    if (curr_coins > dist[curr_building]) {
      continue;
    }

    for (auto &tunnel : tunnels[curr_building]) {
      int next_building = tunnel.first;
      int tunnel_cost = tunnel.second;
      int total_coins =
          curr_coins + tunnel_cost - tunnels[tunnel.first][0].second;

      if (total_coins < dist[next_building]) {
        dist[next_building] = total_coins;
        pq.push({total_coins, {next_building, total_coins}});
      }
    }
  }

  cout << dist[n] << endl;
}

int main() {
  solve();
  return 0;
}
