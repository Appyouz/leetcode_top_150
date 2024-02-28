#include <bits/stdc++.h>

class Solution {

public:
    int romanToInt(std::string s) {
    std::unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
//IIVI
    //XXVII
        int result = 0;
        int prevValue = 0; // Initialize the previous value

        for (char c : s) {
            int currValue = romanValues[c];
            result += currValue;

            // Handle subtraction cases (e.g., IV, IX, XL, XC, etc.)
            if (currValue > prevValue) {
                result -= 2 * prevValue;
            }

            prevValue = currValue; // Update the previous value
        }

        return result;
    }
};

int main(int argc, char *argv[]){
  std::string s {"III"};
  return 0;
}
