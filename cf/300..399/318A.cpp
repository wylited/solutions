#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, k;
  cin >> k >> n;
  if (n <= (k / 2 + k % 2)) {
    cout << fixed << setprecision(0) << 2 * n - 1;
  } else {
    cout << fixed << setprecision(0) << (n - (k / 2 + k % 2)) * 2;
  }
}
