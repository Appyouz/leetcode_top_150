#include <bits/stdc++.h>

class Solution {
public:
  int lengthOfLastWord(std::string s) {
    int count{0};
        bool wordStarted = false;

    for (int i{0}; i < s.length(); ++i) {

      if (s[i] != ' ') {
        wordStarted = true;
        count++;
      }else if(wordStarted){
        break;
      }
    }
    return count;
  }
};

int main(int argc, char *argv[]) {
  std::string s{"Hello World!"};
  Solution sl;
  std::cout << sl.lengthOfLastWord(s) << '\n';
  return 0;
}
