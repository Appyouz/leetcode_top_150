#include <bits/stdc++.h>

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

#include <set>
#include <cstdlib> // For rand()
#include <iterator> // For std::advance

class RandomizedSet {
private:
    std::set<int> mySet;

public:
    RandomizedSet() {
        // Constructor can be left empty
    }
    
    bool insert(int val) {
        if (mySet.find(val) != mySet.end()) {
            return false; // Value already present
        }
        mySet.insert(val);
        return true; // Value inserted successfully
    }
    
    bool remove(int val) {
        auto it = mySet.find(val);
        if (it != mySet.end()) {
            mySet.erase(it);
            return true; // Value removed successfully
        }
        return false; // Value not present
    }
    
    int getRandom() {
        auto it = mySet.begin();
        std::advance(it, std::rand() % mySet.size());
        return *it;
    }
};
