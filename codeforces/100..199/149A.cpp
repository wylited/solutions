#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int k, a[12], tot;
  std::cin >> k;

  if(k == 0){
    std::cout << "0" << std::endl;
    return 0;
  }

  for(int i = 0; i < 12; ++i) {
    std::cin >> a[i];
    tot += a[i];
  } std::sort(a, a+12);

  if(k > tot){
    std::cout << "-1" << std::endl;
    return 0;
  }

  int count = 0;

  while(k > 0){
    k -= a[12-count-1];
    count++;
  }

  std::cout << (count == 0? -1 : count) << std::endl;

  return 0;
}
