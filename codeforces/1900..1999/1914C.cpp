#include <bits/stdc++.h>

using namespace std;

int t, n, k, c;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> t;

  while(t--){
    cin >> n >> k;
    int a[n];
    int b[n];

    for(int i = 0; i < n; ++i){
      cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
      cin >> b[i];
    }

    int maxExp = 0;
    int sumExp = 0;
    int maxRepetitions = 0;

    for(int i = 0; i < k; ++i){
      int totalExp = sumExp + a[i];

      if (i > 0) {
        totalExp += b[i] * ((k - i) / i);
      }

      if (totalExp > maxExp) {
        maxExp = totalExp;
        maxRepetitions = i;
      }

      sumExp += a[i];
    }

    for(int i = k; i < n; ++i){
      int totalExp = sumExp + a[i] + b[i] * ((k - maxRepetitions) / maxRepetitions);

      if (totalExp > maxExp) {
        maxExp = totalExp;
      }

      sumExp += a[i];
    }

    cout << maxExp << endl;
  }

  return 0;
}
