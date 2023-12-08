#include <bits/stdc++.h>

using namespace std;

const string prefix = "3";
const string symbols = "!@#$%^&*()/\\;':\"<>,[]{}`~|+_-=";

vector<string> schematic, integers;
string line, x;
bool adj = false;
int tot;

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  while (fin >> line) {
      schematic.push_back(line);
  }

  for(int l = 0; l < schematic.size(); ++l){
      line = schematic[l];
      for(int c = 0; c < line.length(); ++c){
          char character = line[c];
          if (character == '*'){ // get gear ratio

          }
      }
  }

  fout << tot << endl;

  fin.close();
  fout.close();
  return 0;
}

string getIntegers(vector<string> schematic, int l, int c){
  string line = schematic[l];
  char character = line[c];
  if(c > 0) {
      char prev = line[c - 1];
      if (isdigit(prev)) {
          x += prev;
          getIntegers(schematic, l, c - 1);
      }
  } if (c < line.length() - 1) {
      char next = line[c + 1];
      if (isdigit(next)) {
          x += next;
          getIntegers(schematic, l, c + 1);
      }
  } else {
      integers.push_back(x);
      x = "";
  }
}
