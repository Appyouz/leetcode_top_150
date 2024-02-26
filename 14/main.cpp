#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> prefixProduct(n);
        std::vector<int> suffixProduct(n);
        std::vector<int> answer(n);

        // Calculate prefix products
        prefixProduct[0] = 1;
        for (int i = 1; i < n; ++i) {
            prefixProduct[i] = prefixProduct[i - 1] * nums[i - 1];
        }

        // Calculate suffix products
        suffixProduct[n - 1] = 1;
        for (int i = n - 2; i >= 0; --i) {
            suffixProduct[i] = suffixProduct[i + 1] * nums[i + 1];
        }

        // Calculate answer
        for (int i = 0; i < n; ++i) {
            answer[i] = prefixProduct[i] * suffixProduct[i];
        }

        return answer;
    }
};
