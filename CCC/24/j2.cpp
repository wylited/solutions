#include <bits/stdc++.h>

using namespace std;

int main() {
  int d, t;
  cin >> d;
  while (true) {
    cin >> t;
    if (t < d) {
      d += t;
    } else {
      cout << d;
      return 0;
    }
  }
  return 0;
}
