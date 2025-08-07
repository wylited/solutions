#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int t, n, m, u, v, w;

void dijkstra(vector<vector<pair<int, int>>>& adj, vector<int>& bikeS, int s, vector<int>& dist) {
    dist[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u])
            continue;

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int w = neighbor.second;
            int minS = min(bikeS[u], bikeS[v]);
            int bikeT = w * minS;

            if (dist[u] + bikeT < dist[v]) {
                dist[v] = dist[u] + bikeT;
                pq.push({dist[v], v});
            }
        }
    }
}

void solve() {
  cin >> n >> m;

  // adjacency list
  vector<vector<pair<int, int>>> adj(n + 1);
  for (int i = 0; i < m; i++) {
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  vector<int> bikeS(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> bikeS[i];
  }

  vector<int> d(n+1, INF); // setup djistraak
  dijkstra(adj, bikeS, 1, d);

  // last city
  cout << d[n] << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
