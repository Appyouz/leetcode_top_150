#include <bits/stdc++.h>
/*
Given an integer array nums, rotate the array to the right by k steps, where k
is non-negative. Example 1: Input: nums = [1,2,3,4,5,6,7], k = 3 Output:
[5,6,7,1,2,3,4] Explanation: rotate 1 steps to the right: [7,1,2,3,4,5,6] rotate
2 steps to the right: [6,7,1,2,3,4,5] rotate 3 steps to the right:
[5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:
1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105

Follow up:
Try to come up with as many solutions as you can. There are at least three
different ways to solve this problem. Could you do it in-place with O(1) extra
space?
 * */
class Solution {
public:
  void rotate(std::vector<int>& nums, int k) {
    k %= nums.size();
    int count = 0;
    for (int start = 0; count < nums.size(); start++) {
      int current = start;
      int prev = nums[start];
      do {
        int next = (current + k) % nums.size();
        int temp = nums[next];
        nums[next] = prev;
        prev = temp;
        current = next;
        count++;
      } while (start != current);
    }
  }
};

int main(int argc, char *argv[]) {
  std::vector<int> nums{1, 2, 3, 4, 5, 6, 7};
  int k{3};
  Solution s;
  s.rotate(nums, k);
  for (auto it : nums)
    std::cout << it << ",";
  return 0;
}
