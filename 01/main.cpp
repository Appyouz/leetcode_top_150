#include <bits/stdc++.h>
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming
// from nums1.

class Solution {
public:
  void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    int i{m - 1};
    int j{n - 1};
    int k{(m + n) - 1};
    while (j >= 0) {
      if (i >= 0 && nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
      } else {
        nums1[k--] = nums2[j--];
      }
    }
  }
};

int main(int argc, char **argv) {
  std::vector<int> nums1{1, 2, 3, 0, 0, 0};
  std::vector<int> nums2{2, 5, 6};
  int m{3};
  int n{3};
  Solution s;
  s.merge(nums1, m, nums2, n);

  for (auto it : nums1)
    std::cout << it << ',';
  return 0;
}
