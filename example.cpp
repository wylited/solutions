#include <iostream>
#include <fstream>
#include <string>

const std::string prefix = "example";

int main() {
    std::ifstream in(prefix + "-in.txt");
    std::ofstream out(prefix + "-out.txt");

    std::string line;
    while (in >> line) {
        out << line << std::endl;
        std::cout << line << std::endl;
    }

    in.close();
    out.close();

    return 0;
}