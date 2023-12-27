#include <bits/stdc++.h>

using namespace std;

int t, ans, n;
string s;

void solve() {
  ans = 0;
  cin >> n >> s;
  for(char c : s){
    ans = max(ans, (c - 'a'));
  }
  cout << ans + 1 << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
