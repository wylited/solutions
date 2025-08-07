#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int t;
ll a, b;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve() {
  cin >> a >> b;
  ll x = (a*b) / gcd(a, b);

  if(a == 1){
    cout << b*b << endl;
  } else if (x == b){
    cout << x*2 << endl;
  } else {
    cout << x << endl;
  }
}

int main() {
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
