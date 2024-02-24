#include <bits/stdc++.h>
/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You
may assume that the majority element always exists in the array. Example 1:
Input: nums = [3,2,3]
Output: 3

Follow-up: Could you solve the problem in linear time and in O(1) space?
 * */

// Boyer-Moore Voting Algorithm
class Solution {
public:
  int majorityElement(std::vector<int> &nums) {
    int n{static_cast<int>(nums.size())};
    int count{1};
    int candidate{nums[0]};
    for (int i{1}; i < n; ++i) {
      if (nums[i] == candidate) {
        count++;
      } else if (count == 0) {
        candidate = nums[i];
        count = 1;
      } else {
        count--;
      }
    }
    return candidate;
  }
};
int main(int argc, char *argv[]) {
  std::vector<int> nums{2, 2, 1, 1, 1, 2, 2};
  // std::vector<int> nums{3, 2, 3};
  Solution s;
  std::cout << s.majorityElement(nums);
  return 0;
}
