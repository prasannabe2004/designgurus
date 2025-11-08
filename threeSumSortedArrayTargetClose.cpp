/*
Given an array of unsorted numbers and a target number,
find a triplet in the array whose sum is as close to the target number
as possible, return the sum of the triplet.

If there are more than one such triplet, return the sum of the triplet
with the smallest sum.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
  int searchTriplet(vector<int> &arr, int targetSum) {
    sort(arr.begin(), arr.end());
    int smallestDifference = numeric_limits<int>::max();
    for (int i = 0; i < arr.size() - 2; i++) {
      int left = i + 1, right = arr.size() - 1;
      while (left < right) {
        // comparing the sum of three numbers to the 'targetSum' can cause
        // overflow so, we will try to find a target difference
        int targetDiff = targetSum - arr[i] - arr[left] - arr[right];
        if (targetDiff == 0) { //  we've found a triplet with an exact sum
          return targetSum;    // return sum of all the numbers
        }

        if (abs(targetDiff) < abs(smallestDifference) ||
            (abs(targetDiff) == abs(smallestDifference) &&
             targetDiff > smallestDifference)) {
          smallestDifference = targetDiff; // save the closest difference
        }

        if (targetDiff > 0) {
          left++; // we need a triplet with a bigger sum
        } else {
          right--; // we need a triplet with a smaller sum
        }
      }
    }
    return targetSum - smallestDifference;
  }
};

int main() {
  Solution s;
  vector<int> v = {-3, -2, -1, 0, 1, 1, 2};
  int r = s.searchTriplet(v, 0);
  cout << r << endl;
  return 0;
}