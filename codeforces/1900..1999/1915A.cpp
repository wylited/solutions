#include <bits/stdc++.h>

using namespace std;

int t, a, b, c;

void solve() {
  cin >> a >> b >> c;
  if(a == b){
    cout << c << endl;
  } else if(b == c){
    cout << a << endl;
  } else {
    cout << b << endl;
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
