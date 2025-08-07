#include <bits/stdc++.h>

using namespace std;

bool isgood(string s) {
  for (int i = 1; i < s.length(); ++i) {
    if(s[i-1] == s[i]) {
      return false;
    }
  }
  return true;
}

int T, m, n;
string s, t, x;

int main(){
   cin >> T;

  while(T--) {
     cin >> n >> m >> s >> t;
     x = "";

     if(t[0] == t[m-1]){
       x += t[0];
       x += t[m-1];
     }

     if(isgood(s)){
       cout << "YES\n";
     } else if(s.find(x) == string::npos && isgood(t)){
       cout << "YES\n";
     } else {
       cout << "NO\n";
     }

    for(int i = 0; i < s.length(); ++i) {
       string temp = s;
      if(isgood(temp.insert(i, t))) {
        break;
      }
    }
  }
  return 0;
}

