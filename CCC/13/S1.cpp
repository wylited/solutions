#include <bits/stdc++.h>

using namespace std;

int d;

bool f(int n) {
  std::unordered_set<int> ds;

  while (n != 0) {
    int d = n % 10;

    if (ds.count(d) > 0) {
      return false;
    }

    ds.insert(d);
    n /= 10;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> d;

  while (!f(++d)) {
  }

  cout << d << endl;
  return 0;
}
