#include <bits/stdc++.h>
class Solution {
public:
  int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost) {

    int n = gas.size();
    int start = 0;
    int totalGas = 0;
    int totalCost = 0;
    int tank = 0;

    for (int i = 0; i < n; ++i) {
      totalGas += gas[i];
      totalCost += cost[i];
      tank += gas[i] - cost[i];
      if (tank < 0) {
        start = i + 1;
        tank = 0;
      }
    }

    if (totalGas < totalCost) {
      return -1; // Total gas is less than total cost, impossible to complete
                 // the circuit
    }

    return start;
  }
};

int main(int argc, char *argv[]) {
  std::vector<int> gas{1, 2, 3, 4, 5};
  std::vector<int> cost{3, 4, 5, 1, 2};

  return 0;
}
