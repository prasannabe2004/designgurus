/*
Given an array of numbers sorted in ascending order and a target sum, find a pair in the array whose sum is equal to the given target.

Write a function to return the indices of the two numbers (i.e. the pair) such that they add up to the given target. If no such pair exists return [-1, -1].
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int moveElements(vector<int> &arr) {
    int insertPos = 1;
    for(int i = 0; i < arr.size(); i++) {
      if(arr[insertPos-1] != arr[i]) {
        arr[insertPos] = arr[i];
        insertPos++;
      }  
    }
    return insertPos;
  }
};

int main() {
    Solution s;
    vector<int> v={2, 2, 2, 11};
    int r;
    r = s.moveElements(v);
    cout << r;
    return 0;
}