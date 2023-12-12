#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t, n, m;
  string s;

  cin >> t;

  while(t--){
    cin >> n;

    map<string, int> mp;
    mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;

    for(int i = 0; i < n; ++i){
      cin >> m >> s;

      mp[s] = min(mp[s], m);
    }

    if(min(mp["11"], mp["10"] + mp["01"]) > (int)1e6) {
        cout << -1 << endl;
    } else {
        cout << min(mp["11"], mp["10"] + mp["01"]) << endl;
    }
  }

  return 0;
}
