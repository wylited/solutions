#include <bits/stdc++.h>

bool isgood(std::string s) {
  char prev = s[0];
  for (int i = 1; i < s.length(); ++i) {
    if(s[i-1] == s[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int T, m, n;
  std::string s, t;
  std::cin >> T;

  while(T--) {
    std::cin >> n >> m >> s >> t;
    int slength = s.length();
    std::string output = "No";

    for(int i = 0; i < s.length(); ++i) {
      std::string temp = s;
      if(isgood(temp.insert(i, t))) {
        output = "Yes";
        break;
      }
    }
    std::cout << output << std::endl;
  }
  return 0;
}

