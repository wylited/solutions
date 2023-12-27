#include <bits/stdc++.h>

using namespace std;

int i, t, n, m, m2;

void solve() {
  cin >> n;
  vector<int> s(n);

  for(i = 0; i < n; ++i){
    cin >> s[i];
  }

  vector<int> ss = s;
  sort(ss.begin(), ss.end(), greater<>());

  m = *max_element(s.begin(), s.end());
  m2 = ss[1];
  for(int n : s){
    if(n == m){
      cout << m-m2 << " ";
    } else {
      cout << n-m << " ";
    }
  }
  cout << "\n";
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
