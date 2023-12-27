#include <bits/stdc++.h>

using namespace std;

int t, n, x, y, f[4];

void solve() {
  for(int &flag : f){
    flag = 0;
  }

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x >> y;

    if(x > 0) f[0] = 1;
    if(x < 0) f[1] = 1;
    if(y > 0) f[2] = 1;
    if(y < 0) f[3] = 1;
  }

  if(f[0] && f[1] && f[2] && f[3]){
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;

}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
