#include <bits/stdc++.h>

using namespace std;

int t, n;
string s;
bool l, o;

int count(string s, char c){
  int cnt = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == c) cnt++;
  }
  return cnt;
}

void solve() {
  cin >> n >> s;
  for(int i = 1; i < n; i++){
    l = !(count(s.substr(0, i), 'L') == count(s.substr(i, n), 'L'));
    o = !(count(s.substr(0, i), 'O') == count(s.substr(i, n), 'O'));
    if(l && o){
      cout << i << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main() {
  solve();
  return 0;
}

