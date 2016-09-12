#include <iostream>
#include <typeinfo>
#include <vector>
#include "practice.h"

int main() {
  
  // Run classes of solutions from LeetCode or UvA and test them
  TwoSum two_sum;
  bool result = two_sum.test_case();
  if (result)
    cout << "Passed" << endl;
  else
    cout << "Failed" << endl;

  return 0;
}


