#include <bits/stdc++.h>

class Solution {
public:
  std::string intToRoman(int num) {
    // Map to store Roman numeral symbols and their integer values
    std::map<int, std::string, std::greater<int>> romanMap = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
        {5, "V"},    {4, "IV"},   {1, "I"}};

    std::string result;

    // Iterate through the map
    for (auto &pair : romanMap) {
      int value = pair.first;
      const std::string &symbol = pair.second;

      // Append the symbol to the result string while subtracting its value from
      // num
      while (num >= value) {
        result += symbol;
        num -= value;
      }
    }

    return result;
  }
};
int main(int argc, char *argv[]) { return 0; }
