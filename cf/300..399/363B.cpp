#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define ifor(n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()

int n, k, t;

int main() {
  cin >> n >> k;
  vector<int> a(n, 0);
  cin >> a[0];

  ifor(n - 1) {
    cin >> t;
    a[i + 1] = a[i] + t;
  }

  int m = INT_MAX;
  int id = -1;

  for (int i = k; i < n; i++) {
    if (m > a[i] - a[i - k]) {
      m = a[i] - a[i - k];
      id = i;
    }
  }

  ifor(n - k) {
    if (m > a[i + k] - a[i]) {
      m = a[i + k] - a[i];
      id = i;
    }
  }
  cout << id + 1;
}
