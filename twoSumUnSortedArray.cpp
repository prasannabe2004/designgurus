/*
Given an array of numbers unsorted and a target sum, 
find a pair in the array whose sum is equal to the given target.

Write a function to return the indices of the two numbers (i.e. the pair) such that they add up to the given target. If no such pair exists return [-1, -1].
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {

  public:

  static vector<int> twoSum(const vector<int> &arr, int targetSum) {
    unordered_set<int> s;
    for(int i = 0; i < arr.size(); i++) {
        if(s.find(targetSum - arr[i]) != s.end()) {
            return vector<int>{arr[i], targetSum - arr[i]};
        }
        s.insert(arr[i]);
    }
    return vector<int>{-1, -1};
  }

};

int main() {
    Solution s;
    vector<int> v={1,2,3,4,5,6};
    vector<int> r;
    r = s.twoSum(v, 6);
    for(auto i : r) {
        cout << i << " ";
    }
    return 0;
}