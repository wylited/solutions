#include <bits/stdc++.h>

using namespace std;

int t, n;
long long s, x;

void solve() {
  s = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
    s += x;
  }
  long long sr = sqrt(s);
  if(sr * sr == s){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
