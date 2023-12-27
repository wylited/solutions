#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll t, n, i, o, z;
ll c;

ll countInversions(vector<int> v){
  ll z = 0;
  ll count = 0;

  for(int a : v){
    if(a){
      z++;
    } else {
      count += z;
    }
  }

  return count;
}

void solve() {
  cin >> n;
  vector<int> a(n);
  for(i = 0; i < n; i++){
    cin >> a[i];
  }

  c = z = o = 0;

  c = countInversions(a);

  auto x = find(a.begin(), a.end(), 0);
  if(x != a.end()){
    *x = 1;
    z = countInversions(a);
    *x = 0;
  }

  auto y = find(a.rbegin(), a.rend(), 1);
  if(y != a.rend()){
    *y = 0;
    o = countInversions(a);
    *y = 1;
  }

  cout << max(max(c, z), o) << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
