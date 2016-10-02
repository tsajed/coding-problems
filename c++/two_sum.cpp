// Solution to the TwoSum problem from LeetCode
#include "two_sum.h"

TwoSum::TwoSum() {

}

TwoSum::~TwoSum() {

}

// Naive solver with n^2 runtime
vector<int> TwoSum::solver_naive(vector<int>& nums, int target) {
  for(int i=0; i<nums.size(); i++) {
    for(int j=0; j<nums.size(); j++) {
      int sum = nums[i] + nums[j];
    
      if ((sum == target) && (i != j)) { // Return if sum equals target
        vector<int> return_vector = {i,j};
        return return_vector;
      }
    }
  }
  return {-1, -1};
}

// Efficient solver with nlogn runtime
vector<int> TwoSum::solver(vector<int>& nums, int target) {
  // Duplicate nums vector for sorting and searching
  vector<int> dup(nums);
  std::sort(dup.begin(), dup.end());
  int start_index = 0;
  int end_index = nums.size() - 1;

  // Runtime is nlogn + 3n which O(nlogn) limited by sort functions
  while(start_index < end_index) {
    int sum = dup[start_index] + dup[end_index];
    if (sum == target) {
      // find actual indices in nums vector with values from dup vector
      start_index = find(nums.begin(), nums.end(), dup[start_index]) - nums.begin();
      end_index = find(nums.begin(), nums.end(), dup[end_index]) - nums.begin();
      if (start_index == end_index) { // For repeated values that match
        vector<int>::iterator first_instance = find(nums.begin(), nums.end(), dup[end_index]);
        end_index = find(++first_instance, nums.end(), dup[end_index]) - nums.begin(); 
      }
      return {start_index, end_index};
    }
    else if (sum > target)
      end_index--;
    else if (sum < target)
      start_index++;
  }

  return {-1};
}
// Run Basic test cases on solver
bool TwoSum::test_case() {
  vector<int> test_vector = {0,2,4,0}; 
  vector<int> result = solver(test_vector, 0);
  if (result[0] == 0 && result[1] == 3)
    return true;
  else
    return false;
}
