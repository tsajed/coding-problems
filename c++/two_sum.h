// h file for TwoSum class declarations

#include <iostream>
#include <typeinfo>
#include <vector>
#include <algorithm>
using namespace std;

class TwoSum
{
public:
  TwoSum();
  vector<int> solver(vector<int>&, int);
  vector<int> solver_naive(vector<int>&, int);
  bool test_case();
}; 