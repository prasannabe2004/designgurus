/*
Given an array of numbers sorted in ascending order and a target sum, find a pair in the array whose sum is equal to the given target.

Write a function to return the indices of the two numbers (i.e. the pair) such that they add up to the given target. If no such pair exists return [-1, -1].
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
    while(left <= right) {
      if(arr[left] * arr[left] > arr[right] * arr[right]) {
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
    vector<int> v={-2, -1, 0, 2, 3};
    vector<int> r;
    r = s.makeSquares(v);
    for(auto i : r) {
        cout << i << " ";
    }
    return 0;
}