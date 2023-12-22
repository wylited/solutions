#include <bits/stdc++.h>

using namespace std;

int t, n, k;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> t;

  while(t--){
    cin >> n >> k; // k values in the array of length n must be greater than the previous value
    int a[n];
    int i = n;
    a[i-1] = n;

    for(int i = 0; i < n-k; ++i) {
      a[i] = n-k-i;
    }

    for(int i = n-k; i < n; ++i) {
      a[i] = i+1;
    }

    for (int i : a) {
      cout << i << " ";
    }

    cout << endl;
  }

  return 0;
}
