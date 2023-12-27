#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll t, n, k, c, d, m, i, acc, l, r;

void solve() {
  cin >> n >> c >> d;

  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }  sort(a.begin(), a.end(), greater<ll>());

  l = 0;
  r = d + 2;

  while(l < r){
    m = l + (r - l + 1) / 2;
    acc = 0;

    for(i = 0; i < d; i++)
      if(i % m < n)
        acc += a[i % m];

    if(acc >= c){
      l = m;
    } else {
      r = m - 1;
    }
  }

  if (l == d + 2){
    cout << "Infinity\n";
    return;
  } if (l == 0){
    cout << "Impossible\n";
    return;
  }

  cout << l-1 << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
