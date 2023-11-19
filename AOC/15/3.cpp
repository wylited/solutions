#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

const std::string prefix = "3";

void push_if_not_in(std::vector<std::tuple<int, int>> &vec,
                    const std::tuple<int, int> &t) {
  for (const auto &v : vec) {
    if (v == t) {
      return;
    }
  }

  vec.push_back(t);
}

void move(const char c, int &x, int &y,
          std::vector<std::tuple<int, int>> &vec) {
  switch (c) {
  case '>':
    x++;
    push_if_not_in(vec, std::make_tuple(x, y));
    break;
  case '<':
    x--;
    push_if_not_in(vec, std::make_tuple(x, y));
    break;
  case '^':
    y++;
    push_if_not_in(vec, std::make_tuple(x, y));
    break;
  case 'v':
    y--;
    push_if_not_in(vec, std::make_tuple(x, y));
    break;
  default:
    std::cout << "Error processing: " << c << std::endl;
  }
}

int main() {
  std::ifstream fin("in/" + prefix + ".txt");
  std::ofstream fout("out/" + prefix + ".txt");

  std::string line;
  std::vector<std::tuple<int, int>> santavisited;
  std::vector<std::tuple<int, int>> totvisited;

  push_if_not_in(santavisited, std::make_tuple(0, 0));

  int sxpos = 0, sypos = 0;
  int rxpos = 0, rypos = 0;
  bool santa = true;

  while (fin >> line) {
    for (const auto c : line) {
      // move(c, sxpos, sypos, santavisited); // solution for part a

      if (santa) {
        move(c, sxpos, sypos, totvisited);
        santa = false;
      } else {
        move(c, rxpos, rypos, totvisited);
        santa = true;
      }
    }
  }

  // fout << santavisited.size() << std::endl; // solution for part a
  fout << totvisited.size() << std::endl; // solution for part b

  fin.close();
  fout.close();

  return 0;
}
