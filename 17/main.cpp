#include <bits/stdc++.h>
};
class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = static_cast<int>(height.size());
        int leftBoundary = 0;
        int rightBoundary = 0;

        // Find left boundary
        for (int i = 0; i < n - 1; ++i) {
            if (height[i] > height[i + 1]) {
                leftBoundary = i;
                break;
            }
        }

        // Find right boundary
        for (int i = n - 1; i > 0; --i) {
            if (height[i] > height[i - 1]) {
                rightBoundary = i;
                break;
            }
        }

        int trappedWater = 0;
        for (int i = leftBoundary; i < rightBoundary; ++i) {
            int minHeight = std::max(height[leftBoundary], height[rightBoundary]);
            if (height[i] < minHeight) {
                trappedWater += minHeight - height[i];
            }
        }

        return trappedWater;
    }
};
int main(int argc, char *argv[]){
  std::vector<int> height {0,1,0,2,1,0,1,3,2,1,2,1};
  return 0;
}
