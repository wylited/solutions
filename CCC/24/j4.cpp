#include <bits/stdc++.h>

#include <iostream>
#include <string>

using namespace std;

int main() {
  string in, out;
  cin >> in >> out;

  char silly = ' ';
  char wrong = ' ';
  char quiet = '-';

  if (in.length() == out.length()) {
    for (int i = 0; i < in.length(); i++) {
      if (out.find(in[i]) == string::npos) {
        silly = in[i];
      }
      if (in.find(out[i]) == string::npos) {
        wrong = out[i];
        break;
      }
    }
  } else {
    vector<char> incorrect;
    int offset = 0;
    int silent = 0;
    bool f = true;
    for (int i = 0; i < out.length(); i++) {
      if (in[i] != out[i - offset]) {
        incorrect.push_back(in[i]);
        if (in[i + 1] == out[i - offset]) {
          silent = in[i];
          offset++;
        } else {
          silly = in[i];
          wrong = out[i - offset];
        }
      }
    }

    if (silly == '-') {
      silly = in.back();
    }
  }
  cout << silly << " " << wrong << endl << quiet << endl;
  return 0;
}
