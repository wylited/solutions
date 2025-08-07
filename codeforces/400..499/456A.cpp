#include <bits/stdc++.h>

using namespace std;

int n, p, q;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    if (p != q) {
      cout << "Happy Alex";
      return 0;
    }
  }
  cout << "Poor Alex";
  return 0;
}
