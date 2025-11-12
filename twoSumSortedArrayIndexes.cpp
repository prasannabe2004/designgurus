/*
 * Two Sum - Sorted Array (Return Indices)
 *
 * Problem:
 * Given an array of numbers sorted in ascending order and a target sum,
 * find a pair in the array whose sum is equal to the given target.
 *
 * Task:
 * Write a function to return the indices of the two numbers (i.e. the pair)
 * such that they add up to the given target. If no such pair exists return [-1,
 * -1].
 *
 * Example:
 * Input: arr = [1, 2, 3, 4, 6], target = 6
 * Output: [1, 3] (indices of elements 2 and 4)
 * Explanation: arr[1] + arr[3] = 2 + 4 = 6
 *
 * Input: arr = [2, 5, 9, 11], target = 11
 * Output: [0, 2] (indices of elements 2 and 9)
 * Explanation: arr[0] + arr[2] = 2 + 9 = 11
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    static vector<int> twoSum(const vector<int>& arr, int targetSum) {
        // TODO: Write your code here
        int left = 0;
        int right = arr.size() - 1;
        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == targetSum) {
                return vector<int>{left, right};
            } else if (sum < targetSum) {
                left++;
            } else {
                right--;
            }
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