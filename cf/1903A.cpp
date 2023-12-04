#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t, n, k;
  cin >> t;

  while(t--) {
    cin >> n >> k;
    int a[n];
    string msg = "YES";

    for(int i = 0; i < n; ++i){
      cin >> a[i];
    }

    if(k==1){
      int prev = a[0];
      for(int e : a){
        if(prev > e){
          msg = "NO";
          break;
        } else {
          prev = e;
        }
      }
    }

    cout << msg << endl;
  }

  return 0;
}
