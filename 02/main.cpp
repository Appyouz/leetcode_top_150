#include <bits/stdc++.h>
class Solution {
public:
  int removeElement(std::vector<int> &nums, int val) {
    // Remove val from nums and return the count of remaining elements in nums
    int n{static_cast<int>(nums.size())};
    int count{0};
    for (int i{0}; i < n; ++i) {
      if (nums[i] != val) {
        nums[count++] = nums[i];
      }
    }

    return count;
  }
};

int main(int argc, char *argv[]) {
  std::vector<int> nums{3, 2, 2, 3};
  int val{3};
  Solution s;
  std::cout << s.removeElement(nums, val);
  std::cout << "\n";
  for (auto it : nums)
    std::cout << it << ',';
  return 0;
}
