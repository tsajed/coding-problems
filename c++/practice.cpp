#include <iostream>
#include <typeinfo>
#include <vector>
#include "practice.h"

int main() {
  quiz_157();
  return 0;
}

void quiz_157() {
  std::cout<< (&typeid(A) == &typeid(A));
}