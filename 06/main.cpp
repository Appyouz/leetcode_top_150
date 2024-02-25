#include <bits/stdc++.h>
class Solution {
public:
  std::string longestPalindrome(std::string s) {

    int start = 0, end = 0;
    for (int i = 0; i < s.length(); ++i) {
      std::string palindrome1 = expandAroundCenter(s, i, i);
      std::string palindrome2 = expandAroundCenter(s, i, i + 1);
      if (palindrome1.length() > end - start) {
        start = i - (palindrome1.length() - 1) / 2;
        end = i + palindrome1.length() / 2;
      }
      if (palindrome2.length() > end - start) {
        start = i - palindrome2.length() / 2 + 1;
        end = i + palindrome2.length() / 2;
      }
    }
    return s.substr(start, end - start + 1);
  }

  std::string expandAroundCenter(const std::string &s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
      left--;
      right++;
    }
    return s.substr(left + 1, right - left - 1);
  }
};

int main(int argc, char *argv[]) {
  std::string_view s{"babad"};
  return 0;
}
