#include <bits/stdc++.h>

using namespace std;

const string prefix = "example";

int main() {
  ifstream fin("in_" + prefix + ".txt");
  ofstream fout("out_" + prefix + ".txt");

  string line;
  while (fin >> line) {
    fout << line << std::endl;
  }

  fin.close();
  fout.close();

  return 0;
}
