// Solution to the TwoSum problem from LeetCode
#include "two_sum.h"

TwoSum::TwoSum() {

}

vector<int> TwoSum::solver(vector<int>& nums, int target) {
  for(int i=0; i<nums.size(); i++) {
    for(int j=0; j<nums.size(); j++) {
      int value = nums[i] + nums[j];
    
      if ((value == target) && (i != j)) { // Return if value equals target
        vector<int> return_value = {i,j};
        return return_value;
      }
    }
  }
  return {-1, -1};
}

// Run Basic test cases on solver
bool TwoSum::test_case() {
  vector<int> test_vector = {3,2,4}; 
  vector<int> result = solver(test_vector, 6);
  if (result[0] == 1 && result[1] == 2)
    return true;
  else
    return false;
}
