#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t, n, m, u, v;
  cin >> t;

  while(t--) {
    cin >> n >> m;
    vector<int> g[n+1];
    vector<int> c(n+1, 0);

    for(int i = 0; i < m; i++){
      cin >> u >> v;
      g[u].push_back(v);
      c[u] += 1;
      g[v].push_back(u);
      c[v] += 1;
    }

    int xy = 0;
    int x = -2;

    for(int e : c){
      if (e == 1) {
        xy += 1;
      } else {
        x += 1;
      }
    }

    cout << x << " " << xy/x << "\n";
  }

  return 0;
}
