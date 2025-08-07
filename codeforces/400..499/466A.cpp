#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int sum = a * (n % m) + b * (n / m);
  sum = min(sum, a * n);
  sum = min(sum, b * ((m + n - 1) / m));
  cout << sum;
}
