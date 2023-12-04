#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while(t--){
    int a, b, c;
    cin >> a >> b >> c;

    cout << ((a+(c%2)>b) ? "First" : "Second") << endl;
  }
  return 0;
}
