#include <iostream>
#include <fstream>
#include <string>
#include <climits>

const std::string prefix = "AOC1-15";

int main() {
    std::ifstream in(prefix + "-in.txt");
    std::ofstream out(prefix + "-out.txt");

    std::string line;
    int floor = 0;
    int count = 0;
    int first_basement_entry = INT_MAX;

    while (in >> line) {
        // for each character in line if the character is ( increase the floor if its ) decrease the floor
        for (char c : line) {
            if (c == '(') {
                floor++;
            } else if (c == ')') {
                floor--;
            }

            count++;

            if (floor < 0) {
                first_basement_entry = std::min(first_basement_entry, count);
            }
        }   
    }

    out << floor << std::endl;
    out << first_basement_entry;

    in.close();
    out.close();
    
    return 0;
}