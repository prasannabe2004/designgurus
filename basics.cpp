/*
Given an array of numbers sorted in ascending order and a target sum, find a
pair in the array whose sum is equal to the given target.

Write a function to return the indices of the two numbers (i.e. the pair) such
that they add up to the given target. If no such pair exists return [-1, -1].
*/

#include <iostream>
#include <vector>

using namespace std;

// User function Template for C++
class Solution {
   public:
    int trailingZeroes(int n) {
        // Write Your Code here
        int count = 0;
        int factor2 = 0;
        int factor5 = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                factor2 = 1;
            } else if (i % 5 == 0) {
                factor5 = 1;
            } else if (i % 10 == 0)
                count++;
            if (factor2 == 1 && factor5 == 1) {
                count++;
                factor2 = 0;
                factor5 = 0;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    int r = s.trailingZeroes(43);
    cout << r << " ";
    return 0;
}