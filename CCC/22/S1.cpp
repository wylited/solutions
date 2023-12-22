#include <bits/stdc++.h>

using namespace std;

int n, c;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;

  while(true) {
   cout << n << endl;
    if(n < 0){
      cout << c << endl;
      break;
    }
    if(n % 4 == 0){
      c++;
    }
    n -= 5;
  }

  return 0;
}
