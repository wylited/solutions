#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const string prefix = "2";

int main() {
  ifstream in("in/" + prefix + ".txt");
  ofstream out("out/" + prefix + ".txt");

  string line;
  auto totW = 0;
  auto totR = 0;

  while (in >> line) {
    const auto l = stoi(line.substr(0, line.find('x')));
    line = line.substr(line.find('x') + 1);
    const auto w = stoi(line.substr(0, line.find('x')));
    line = line.substr(line.find('x') + 1);
    const auto h = stoi(line);

    auto slack = min(min(l * w, w * h), h * l);

    totW += 2 * l * w + 2 * w * h + 2 * h * l + slack; // hello

    int ribbonBow = l * w * h;
    int ribbon = min(2 * (w + h + l),
                     min(2 * w + 2 * h, min(2 * h + 2 * l, 2 * w + 2 * l)));

    totR += ribbon + ribbonBow;
  }

  out << totW << endl; // part a
  out << totR << endl; // part b

  in.close();
  out.close();

  return 0;
}
