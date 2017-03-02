#include <iostream>

int naive(short *s, int *i);

int main() {
  int i;
  short *s = reinterpret_cast<short *>(&i);
  std::cout << naive(s, &i) << std::endl;
}
