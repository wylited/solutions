#include <bits/stdc++.h>
using namespace std;
// longest-substring-without-repeating-characters

class WorseSolution {
public:
  int lengthOfLongestSubstring(string s) {
    int len = 1;
    for (int i = 0; i < s.size(); i++) {
      unordered_set<char> chars;
      chars.insert(s[i]);
      for (int j = i + 1; j < s.size(); j++) {
        if (chars.find(s[j]) != chars.end()) {
          len = max(len, j - i);
          break;
        }
        chars.insert(s[j]);
      }
    }
    return len;
  }
};

// sliding window attempt
// class Solution {
// public:
//   int lengthOfLongestSubstring(string s) {
//     if (s.size() == 0)
//       return 0;
//     int r, len = 1;
//     int l = 0;
//     while (r < s.size()) {
//       unordered_set<char> chars;
//       chars.insert(s[l]);
//       for (r = l + 1; r < s.size(); r++) {
//         if (chars.find(s[r]) != chars.end()) {
//           len = max(len, r - l);
//           break;
//         }
//         chars.insert(s[r]);
//       }
//       if (r == s.size()) {
//         len = max(len, r - l);
//         break;
//       }
//       chars.erase(s[l]);
//       l++;
//     }
//     return len;
//   }
// };
