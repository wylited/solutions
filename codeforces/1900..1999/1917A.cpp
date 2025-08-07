#include <bits/stdc++.h>

using namespace std;

int t, n, a, i;

void solve() {
  cin >> n;
  bool f = false;
  vector<int> neg;

  while(n--){
    cin >> a;

    if(a == 0){
      f = true;
    } else if(a < 0){
      neg.push_back(a);
    }
  }

  if(f){
    cout << "0\n";
  } else if(neg.size() % 2 == 0){
    cout << "1\n1 0\n";
  } else {
    cout << "0\n";
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
