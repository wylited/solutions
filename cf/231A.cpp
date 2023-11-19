#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  std::cin >> n;
  int count = 0;


  for(int i = 0; i < n; i++){
    int a, b, c;
    std::cin >> a >> b >> c;

    if((a + b + c) >= 2)
      count++;
  }

  std::cout << count;

  return 0;
}
