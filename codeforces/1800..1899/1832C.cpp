#include <bits/stdc++.h>

using namespace std;

long t, n, i, c;

void solve() {
  cin >> n;
  vector<long> a(n);
  vector<long> r;
  for(i = 0; i < n; i++){
    cin >> a[i];
  }

  a.erase(unique(a.begin(), a.end()), a.end());
  n = a.size();

  for(i = 1; i < (a.size()-1); i++){
    if(a[i-1] < a[i] && a[i] < a[i+1]){
      n--;
    } if (a[i-1] > a[i] && a[i] > a[i+1]){
      n--;
    }
  }

  cout << n << endl;
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
