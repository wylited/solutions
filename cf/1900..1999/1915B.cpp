#include <bits/stdc++.h>

using namespace std;

int t;
string x;

void solve() {
  vector<int> s(26, 0);
  char c;
  for(int i = 0; i < 3; i++){
    cin >> x;
    for(char c : x){
      if (c == '?') continue;
      s[c-'A']++;
    }
  }
  for(int i = 0; i < 26; i++){
    if(s[i] == 2){
      c = 'A' + i;
      cout << c << endl;
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
