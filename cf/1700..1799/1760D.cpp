#include <bits/stdc++.h>

using namespace std;

int t, n, i;

void solve() {
  cin >> n;
  vector<int> a(n);

  for(i = 0; i < n; ++i){
    cin >> a[i];
  }

  auto last = unique(a.begin(), a.end());
  a.erase(last, a.end()); // secret sauce, ignore da plateau.

  for(i = 1; i < (a.size() - 1); ++i){
    if(a[i-1] < a[i] && a[i] > a[i+1]){
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
