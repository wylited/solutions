#include <bits/stdc++.h>

using namespace std;

vector<string> f;

long s(long x, long y, long r, long c) {
  char p = f[x][y];
  long val = 0;
  f[x][y] = '*';

  if (p == '*') {
    return 0;
  }

  if (p == 'L') {
    val = 10;
  } else if (p == 'M') {
    val = 5;
  } else if (p == 'S') {
    val = 1;
  } else {
    return 0;
  }

  if (x > 0) {
    val += s(x - 1, y, r, c);
  }
  if (x < r - 1) {
    val += s(x + 1, y, r, c);
  }
  if (y > 0) {
    val += s(x, y - 1, r, c);
  }
  if (y < c - 1) {
    val += s(x, y + 1, r, c);
  }

  return val;
}

int main() {
  long r, c, x, y;
  cin >> r >> c; // rows cols
  vector<string> a(r, string(c, '*'));
  f = a;

  for (long i = 0; i < r; i++) {
    cin >> f[i];
  }

  cin >> x >> y;
  cout << s(x, y, r, c);
}
