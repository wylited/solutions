#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, l, t;
  cin >> n >> l;
  set<int> a;

  for (int i = 0; i < n; i++) {
    cin >> t;
    a.insert(t);
  }

  int mD = 2 * max(*(a.begin()), l - *(a.rbegin()));
  auto it = a.begin();
  int pV = *it++;

  for (; it != a.end(); ++it) {
    int cV = *it;
    int cD = cV - pV;
    if (cD > mD) {
      mD = cD;
    }
    pV = cV;
  }

  cout << setprecision(9) << fixed << 0.5 * mD << endl;
}
