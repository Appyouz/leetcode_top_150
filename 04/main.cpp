#include <bits/stdc++.h>
/*Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
Explanation: Your function should return k = 5, with the first five elements of
nums being 1, 1, 2, 2 and 3 respectively. It does not matter what you leave
beyond the returned k (hence they are underscores).
 * */
class Solution {
public:
  int removeDuplicate(std::vector<int> &nums) {
    // k=count
    int k = 0;
    for (int i = 0; i < nums.size(); ++i) {
      // if elements has more than 2 duplicates then remove it
      if (k < 2 || nums[i] != nums[k - 2]) {
        nums[k++] = nums[i];
      }
    }
    return k;
  }
};
int main(int argc, char *argv[]) {
  std::vector<int> nums{1, 1, 1, 2, 2, 3};
  Solution s;
  std::cout << s.removeDuplicate(nums) << '\n';
  return 0;
}
