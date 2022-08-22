#include <iostream>

int main(int argc, char **argv) {
  for (double n = 0.0; n <= 0.9; n = n + 0.1) {
    std::cout << n << " ";
    //++n;
  }
  std::cout << "\n";

  return 0;
}