#include <bits/stdc++.h>

using namespace std;

int n, x, y;
string a, b;
map <int, int> m;

void solve() {
  cin >> n;
  cin.ignore();

  getline(cin, a);
  getline(cin, b);

  stringstream as(a), bs(b);

  for(int i = 0; i < n; i++){
    as >> x; bs >> y;
    m[x] = y;
  }

  for(const pair<int, int>& p : m){
    cout << p.second << " ";
  }
}

int main() {
  solve();
  return 0;
}
