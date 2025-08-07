#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, a, b;
  n = 1000000;
  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;
  for (int i = 2; i <= n; i++)
    if (prime[i] && (long long)i * i <= n)
      for (int j = i * i; j <= n; j += i)
        prime[j] = false;

  cin >> n;
  for (ll i = 0; i < n; i++) {
    cin >> a;
    b = sqrt(a);
    if (b * b == a) {
      cout << (prime[b] ? "YES" : "NO") << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
