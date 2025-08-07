#include <bits/stdc++.h>

using namespace std;

bool isBinary(int num) {
  std::string str = std::to_string(num);
  for (char c : str) {
    if (c != '0' && c != '1') {
      return false;
    }
  }
  return true;
}

bool checker(int n) {
  if (n == 1) {
    return true;
  }

  int sqrt_n = static_cast<int>(sqrt(n));
  for (int i = 2; i <= sqrt_n; i++) {
    if (isBinary(i) && n % i == 0) {
      int j = n / i;
      while (j % i == 0 && j != 1) {
        j = j / i;
      }
      if (isBinary(j)) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    if (checker(n) || isBinary(n)) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
