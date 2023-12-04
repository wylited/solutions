#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, x;
  string s;
  cin >> n;

  while(n--) {
    cin >> s;
    if(s == "X++" || s == "++X") {
      x++;
    } else {
      x--;
    }
  }
  cout << x << "\n";
  return 0;
}
