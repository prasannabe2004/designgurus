/*
Given an array of sorted numbers, move all non-duplicate number instances at the beginning of the array in-place. 
The non-duplicate numbers should be sorted and you should not use any extra space so that the solution has constant space complexity i.e., .

Move all the unique number instances at the beginning of the array and after moving return the length of the subarray that has no duplicate in it.
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