#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const string prefix = "1A";

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  vector<int> l;
  int sum = 0;
  string line, x;

  while (fin >> line) {
    x = "";

    for(char c : line){
      if('1' <= c && c <= '9'){
        x += c;
      }
    }

    int tens = (x[0] - '0') * 10;
    int ones = x.back() - '0';
    l.push_back(tens + ones);
  }

  for(int i : l) {
    sum += i;
  }

  fout << sum << std::endl;

  fin.close();
  fout.close();

  return 0;
}
