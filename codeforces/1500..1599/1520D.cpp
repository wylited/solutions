#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
  ll n, s, tot;
  cin >> n;
  map<int, int> m;
  tot = 0;
  for (int i = 0; i < n; i++) {
    cin >> s;
    tot += m[s - i];
    m[s - i]++;
  }
  cout << tot << endl;
}

int t;

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
}
