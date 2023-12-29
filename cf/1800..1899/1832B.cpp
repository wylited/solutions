#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n, k, i, s;

void solve() {
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> p(n+1, 0);
  s = 0;

  for(i = 0; i < n; i++){
    cin >> a[i];
  } sort(a.begin(), a.end());

  for(i = 0; i < n; i++){
    p[i+1] = p[i] + a[i];
  }

  for(i = 0; i <= k; i++){
    s = max(s, p[n-(k-i)] - p[2*i]);
  }

  cout << s << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
