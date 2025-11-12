/*
 * Squares of a Sorted Array
 *
 * Problem:
 * Given a sorted array, create a new array containing squares of all the
 * numbers of the input array in the sorted order.
 *
 * Example:
 * Input: [-2, -1, 0, 2, 3]
 * Output: [0, 1, 4, 4, 9]
 * Explanation: Squares are [4, 1, 0, 4, 9], sorted order is [0, 1, 4, 4, 9]
 *
 * Input: [-3, -1, 0, 1, 2]
 * Output: [0, 1, 1, 4, 9]
 * Explanation: Squares are [9, 1, 0, 1, 4], sorted order is [0, 1, 1, 4, 9]
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    static vector<int> makeSquares(const vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = 0;
        vector<int> squares(n);

        int left = 0;
        int right = arr.size() - 1;
        int nextIndex = n - 1;
        while (left <= right) {
            if (arr[left] * arr[left] > arr[right] * arr[right]) {
                squares[nextIndex] = arr[left] * arr[left];
                left++;
            } else {
                squares[nextIndex] = arr[right] * arr[right];
                right--;
            }
            nextIndex--;
        }
        return squares;
    }
};

int main() {
    Solution s;
    vector<int> v = {-2, -1, 0, 2, 3};
    vector<int> r;
    r = s.makeSquares(v);
    for (auto i : r) {
        cout << i << " ";
    }
    return 0;
}