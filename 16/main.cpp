#include <bits/stdc++.h>

// 135. Candy
class Solution {
public:
    int candy(std::vector<int>& ratings) {
        int n = ratings.size();
        int sum = 0;
    std::vector<int> ans(n, 1); // Initialize ans array with 1

        for (int i = 0; i < n - 1; i++) {
            if (ratings[i + 1] > ratings[i]) {
                ans[i + 1] = ans[i] + 1;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1] && ans[i] <= ans[i + 1]) {
                ans[i] = ans[i + 1] + 1;
            }
            sum += ans[i];
        }

        sum += ans[n - 1]; // Add the last element
        return sum;
    }
};
