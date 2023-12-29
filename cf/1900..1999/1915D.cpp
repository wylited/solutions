#include <bits/stdc++.h>

using namespace std;

int t, v, c, n;
string s, f;

bool vowel(char c){
  return c == 'a' || c == 'e' ? true : false;
}

void solve() {
  cin >> n >> s;
  f = s[0];
  v = c = 0;

  if(n < 3){
    cout << s << endl;
    return;
  }

  for(int i = 1; i < (n-2); i++){
    f.push_back(s[i]);
    if(!vowel(s[i])){
      if(!vowel(s[i+1])){
        f.push_back('.');
      }
    } else {
      if(!vowel(s[i+1]) && vowel(s[i+2])){
        f.push_back('.');
      }
    }
  }

  f.push_back(s[n-2]);
  f.push_back(s[n-1]);

  cout << f << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
