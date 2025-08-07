#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n, i, tot;
bool f;

void solve() {
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> m;
  tot = 0; f = false;

  for(i = 0; i < n; i++) {
    cin >> a[i];
    if(i % 2 == 0){
      tot -= a[i];
    } else {
      tot += a[i];
    }
    if(m[tot] || tot == 0){
      f = true;
    }
    m[tot]++;
  }

  cout << (f?"YES\n":"NO\n");

}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
