#include <bits/stdc++.h>

using namespace std;

int t, n;
string s;

void solve() {
  cin >> s;
  s = s.substr(0, s.size()/2);
  int k = unique(s.begin(), s.end()) - s.begin();

  if(k == 1){
    cout << "no\n";
  } else {
    cout << "yes\n";
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
