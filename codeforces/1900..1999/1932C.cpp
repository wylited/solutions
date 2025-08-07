#include <bits/stdc++.h>

using namespace std;

long long t, n, m, temp;

void solve() {
  cin >> n >> m;
  vector<long long> a;
  cin >> temp;
  a.push_back(temp % m);

  for (int i = 1; i < n; i++) {
    cin >> temp;
    a.push_back(temp % m);
  }

  string s;
  cin >> s;

  long long L = 0;
  long long R = n - 1;

  for (int i = 0; i < n; i++) {
    temp = 1;

    for (int j = L; j <= R; j++) {
      temp *= a[j];
    }

    cout << temp % m << " ";

    if (s[i] == 'L') {
      L++;
    } else {
      R--;
    }
  }

  cout << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
