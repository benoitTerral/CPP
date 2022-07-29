// ifstream constructor.
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream

int main () {

  std::ifstream ifs ("input.txt", std::ifstream::in);

  std::string c = ifs.get();

  while (ifs.good()) {
    std::cout << c;
    c = ifs.get();
  }

  ifs.close();

  return 0;
}