/*
 * Remove Duplicates from Sorted Array
 *
 * Problem:
 * Given an array of sorted numbers, move all non-duplicate number instances
 * at the beginning of the array in-place. The non-duplicate numbers should be
 * sorted and you should not use any extra space so that the solution has
 * constant space complexity.
 *
 * Task:
 * Move all the unique number instances at the beginning of the array and
 * after moving return the length of the subarray that has no duplicate in it.
 *
 * Example:
 * Input: [2, 3, 3, 3, 6, 9, 9]
 * Output: 4
 * Explanation: First 4 elements [2, 3, 6, 9] are unique, length = 4
 *
 * Input: [2, 2, 2, 11]
 * Output: 2
 * Explanation: First 2 elements [2, 11] are unique, length = 2
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int moveElements(vector<int>& arr) {
        int insertPos = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[insertPos - 1] != arr[i]) {
                arr[insertPos] = arr[i];
                insertPos++;
            }
        }
        return insertPos;
    }
};

int main() {
    Solution s;
    vector<int> v = {2, 2, 2, 11};
    int r;
    r = s.moveElements(v);
    cout << r;
    return 0;
}