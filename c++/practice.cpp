#include <iostream>
#include <typeinfo>

struct A {};
using namespace std;

int main() {
  quiz_157();
  return 0;
}

void quiz_157() {
  std::cout<< (&typeid(A) == &typeid(A));
}