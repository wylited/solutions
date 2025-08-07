#include <bits/stdc++.h>

using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int t; // testcases
  cin >> t;

  for(int i = 0; i < t; i++){
    int x, y, k; // Location of chest, key, time he can carry
    cin >> x >> y >> k;
    if(y <= x){
      cout << x << "\n";
    } else if(x+k > y){
      cout << y << "\n";
    } else {
      cout << (2*y)-(x+k) << "\n";
    }
  }
  return 0;
}
