#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, tot(0), i(1);
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    tot += 5 * (i + 1);
    if (tot + k > 240) {
      cout << i << endl;
      break;
    }
  }
  cout << n << endl;
}

// i have no clue what im doing
// int main() {
//   int n, k;
//   cin >> n >> k;
//   vector<int> v(n);

//   v[0] = 5;

//   for (int i = 1; i < n; i++) {
//     v[i] = v[i - 1] + (5 * (i + 1));
//   }

//   cout << lower_bound(v.begin(), v.end(), 240 - k) - v.begin() << endl;

//   return 0;
// }
