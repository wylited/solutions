#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, m, a;
  cin >> n >> m >> a;
  ll ans = 1;
  ans *= (n / a + (n % a != 0));
  ans *= (m / a + (m % a != 0));
  cout << ans;
}
