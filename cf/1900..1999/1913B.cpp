#include <bits/stdc++.h>

using namespace std;

int t, i;
string s, r;

void solve() {
  cin >> s;
  vector<int> cnt(2, 0);

  for(char c : s){
    cnt[c - '0']++;
  }

  for(int i = 0; i <= s.length(); ++i){
    if(i == s.length() || cnt[1 - (s[i] - '0')] == 0){
      cout << s.length() - i << endl;
      break;
    }
    cnt[1 - (s[i] - '0')]--;
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
