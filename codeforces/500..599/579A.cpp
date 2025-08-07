#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int num;
  std::cin >> num;

  int count = 0;
  while (num != 0) {
    num = num & (num - 1);
    count++;
  }
  std::cout <<count;
  return 0;
}
