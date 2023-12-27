#include <bits/stdc++.h>

using namespace std;

int t;
vector<int> a(3, 0);

void solve() {
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  cout << a[1] << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
