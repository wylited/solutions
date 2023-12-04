#include <bits/stdc++.h>

using namespace std;

const string prefix = "1";

vector<int> findall(string s, vector<string> f) {
  vector<int> l;
  int pos;

  for(string x : f){
    pos = s.find(x);

    while(pos != string::npos){
      l.push_back(pos);
      pos = s.find(x, pos + 1);
    }
  } sort(l.begin(), l.end());

  return l;
}

int findvalue(string s, int pos){
  if ('1' <= s[pos] && s[pos] <= '9') return s[pos] - '0';
  else if (s[pos] == 'o') return 1;
  else if (s[pos] == 't' && s[pos+1] == 'w') return 2;
  else if (s[pos] == 't' && s[pos+1] == 'h') return 3;
  else if (s[pos] == 'f' && s[pos+1] == 'o') return 4;
  else if (s[pos] == 'f' && s[pos+1] == 'i') return 5;
  else if (s[pos] == 's' && s[pos+1] == 'i') return 6;
  else if (s[pos] == 's' && s[pos+1] == 'e') return 7;
  else if (s[pos] == 'e') return 8;
  else if (s[pos] == 'n') return 9;
  else if (s[pos] == 't' && s[pos+1] == 'e') return 10;
  else return 0;
}

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  vector<int> c;
  int sum = 0;
  string line, x;

  while (fin >> line) {
    vector<int> nums = findall(line, {"1", "2", "3", "4", "5", "6", "7", "8", "9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"});
    sum += findvalue(line, nums[0]) * 10 + findvalue(line, nums.back());
  }

  fout << sum << std::endl;

  fin.close();
  fout.close();

  return 0;
}

