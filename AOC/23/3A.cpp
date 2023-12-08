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
          if ('0' <= character && character <= '9') {
              x += character;
              for(int i = max(0, l-1); i < min(schematic.size(), static_cast<size_t>(l)+2); ++i){
                  for(int j = max(0, c-1); j < min(line.length(), static_cast<size_t>(c)+2); ++j){
                      if(symbols.find(schematic[i][j]) != string::npos){
                          adj = true;
                      }
                  }
              }
          } else {
              if(adj)
                  tot += stoi(x);

              adj = false;
              x = "";
          }
      }
  }

  fout << tot << endl;

  fin.close();
  fout.close();

  return 0;
}
