#include <bits/stdc++.h>

int teleports(std::vector<int> c){
  std::vector<std::vector<int>> ribbons;

  while (true) {
    std::vector <int> ribbon;
    for(int i : c){
      i -= 1;
      if (i == 0){
        break;
      } else {
        ribbon.push_back(i);
        c.erase(c.begin());
      }
    }
    ribbons.push_back(ribbon);
  }

  int count = 0;

  if (ribbons.size() == 1){
    int count = 1;
  } else {
    for (std::vector<int> ribbon : ribbons){
      count += teleports(ribbon);
    }
  }

  return count;
}

int main() {
  int t, x, n;
  std::vector<int> c;

  std::scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    std::scanf("%d", &n);

    for(int i = 0; i < n; ++i){
      std::scanf("%d", &x);
      c.push_back(x);
    }


    std::cout << teleports(c) << std::endl;
  }

  return 0;
}
