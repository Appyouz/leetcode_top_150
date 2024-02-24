#include <bits/stdc++.h>
// Remove duplicates from the array elements and return the remaining elements
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

class Solution {
public:
  int removeDuplicate(std::vector<int> &nums) {
    int n{static_cast<int>(nums.size())};
    int count{1};
    int temp{nums[0]};
    for (int i{0}; i < n; ++i) {
      if (nums[i] != temp) {
        temp = nums[i];
        nums[count++] = nums[i];
      }
    }
    return count;
  }
};
// Optmized solution than mine 
// which minimizes the operations needed to remove duplicates
/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 
        int j = 1; 
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[j - 1]) {
                nums[j++] = nums[i]; 
            }
        }

        return j; 
    }
};
 * */
int main(int argc, char *argv[]) {
  std::vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  Solution s;
  std::cout << s.removeDuplicate(nums) << '\n'; 

  return 0;
}
