#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const std::string prefix = "example";

int main() {
  std::ifstream fin(prefix + "-in.txt");
  std::ofstream fout(prefix + "-out.txt");

  std::string line;
  while (fin >> line) {
    fout << line << std::endl;
  }

  fin.close();
  fout.close();

  return 0;
}
