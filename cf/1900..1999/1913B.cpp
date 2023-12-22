#include <bits/stdc++.h>

using namespace std;

int t, i;
int cnt[2];
string s;

void solve() {
  cin >> s;

  for(char c : s){
    cnt[c - '0'] += 1;
  }

  for(i = 0; i <= s.length(); i++){
    if(i == s.length() || cnt[1 - (s[i] - '0')] == 0){
      cout << s.length() - i << endl;
      break;
    } else {
      cnt[1 - (s[i] - '0')] -= 1;
    }
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
