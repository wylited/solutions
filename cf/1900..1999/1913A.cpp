#include <bits/stdc++.h>

using namespace std;

int t;
string ab;
string ans;

int main() {
  cin >> t;
  while(t--){
    cin >> ab;
    int n = ab.size();
    ans = "-1";
    while(n-- > 1){
      if(stoi(ab.substr(0, n)) < stoi(ab.substr(n, ab.size()))){
        if(ab.substr(n, ab.size())[0] == '0')
          continue;
        ans = ab.substr(0, n) + " " + ab.substr(n, ab.size());
        break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
