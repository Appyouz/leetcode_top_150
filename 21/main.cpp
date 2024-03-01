#include <bits/stdc++.h>
class Solution {
public:
  std::string reverseWords(std::string s) {
    std::string result;
    int i = 0;
    int n = s.length();

    while(i < n){
        while(i < n && s[i] == ' ') i++;
        if(i >= n) break;
        int j = i + 1;
        while(j < n && s[j] != ' ') j++;
      std::string sub = s.substr(i, j-i);
        if(result.length() == 0) result = sub;
        else result = sub + " " + result;
        i = j+1;
    }
    return result;
    }
};

int main(int argc, char *argv[]) { std::string s{"the sky is blue"};
  Solution solution;
  std::cout << solution.reverseWords(s) << '\n';
  return 0;
}
