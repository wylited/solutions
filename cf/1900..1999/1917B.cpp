#include <bits/stdc++.h>

using namespace std;

int t, n, a;
string s;

void solve() {
  cin >> n >> s;
  a = 0;
  for(char i = 'a'; i <= 'z'; i++){
    auto pos = s.find(i);
    if(pos == string::npos){
      continue;
    }
    a += n - pos;
  }
  cout << a << endl;
}

int main(){
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
