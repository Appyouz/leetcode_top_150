#include <bits/stdc++.h>
/*
Medium
Given an array of integers citations where citations[i] is the number of citations 
a researcher received for their ith paper, return the researcher's h-index.
According to the definition of h-index on Wikipedia: The h-index is defined as the 
maximum value of h such that the given researcher has published at least h papers 
that have each been cited at least h times.


Example 1:
Input: citations = [3,0,6,1,5]
Output: 3
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
 * */

#include <algorithm>
#include <vector>

class Solution {
public:
    static bool compare(int a, int b) {
        return a > b;
    }

    int hIndex(std::vector<int>& citations) {
        int n = static_cast<int>(citations.size());
        std::sort(citations.begin(), citations.end(), compare);
        for (int i = n - 1; i >= 0; --i) { // Iterate from last position to start position
            if (citations[i] <= n - i - 1) return n - i - 1; // Check if current citation count is less than or equal to its index
        }
        return n; // If no such index found, H-index is equal to the number of elements in citations
    }
};
