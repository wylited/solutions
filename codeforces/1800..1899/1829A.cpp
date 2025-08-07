#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t, count;
  string n;
  string c = "codeforces";
  cin >> t;
  while (t--) {
    count = 0;
    cin >> n;
    for(int i = 0; i < n.length(); ++i){
      if(n[i] != c[i]){
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}
