#include <bits/stdc++.h>

using namespace std;

int anitaMaxSplit(vector<int> v, int n, int K) {
  int count = 0;
  int positiveCount = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] == 1) {
      positiveCount++;
    } else {
      positiveCount--;
    }

    if (positiveCount >= 0 && (i < n - 1 || positiveCount > 0)) {
      count++;
    }
  }

  return std::min(count, K);
}

void solve() {
  int n;
  string s;
  vector<int> v;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    v.push_back(s[i] == '1' ? 1 : -1);
  }

  for (int k = 0; k < n; k++) {
    cout << anitaMaxSplit(v, n, k) << " ";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
    cout << endl;
  }
  return 0;
}
