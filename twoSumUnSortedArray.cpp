/*
 * Two Sum - Unsorted Array
 *
 * Problem:
 * Given an array of numbers (unsorted) and a target sum, find a pair
 * in the array whose sum is equal to the given target.
 *
 * Task:
 * Write a function to return the values of the two numbers (i.e. the pair)
 * such that they add up to the given target. If no such pair exists return [-1,
 * -1].
 *
 * Example:
 * Input: arr = [1, 2, 3, 4, 6], target = 6
 * Output: [2, 4] (values that sum to 6)
 * Explanation: 2 + 4 = 6
 *
 * Input: arr = [2, 5, 9, 11], target = 11
 * Output: [2, 9] (values that sum to 11)
 * Explanation: 2 + 9 = 11
 */

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
   public:
    static vector<int> twoSum(const vector<int>& arr, int targetSum) {
        unordered_set<int> s;
        for (int i = 0; i < arr.size(); i++) {
            if (s.find(targetSum - arr[i]) != s.end()) {
                return vector<int>{arr[i], targetSum - arr[i]};
            }
            s.insert(arr[i]);
        }
        return vector<int>{-1, -1};
    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> r;
    r = s.twoSum(v, 6);
    for (auto i : r) {
        cout << i << " ";
    }
    return 0;
}