/*
Given an array of unsorted numbers, find all unique triplets in it that add up
to zero.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
  static vector<vector<int>> twoSum(vector<int> &arr, int targetSum) {
    // TODO: Write your code here

    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for (int i = 0; i < arr.size() - 2; i++) {
      // Skip duplicates
      if (i > 0 && arr[i] == arr[i - 1]) {
        continue;
      }
      int left = i + 1;
      int right = arr.size() - 1;
      while (left < right) {
        int sum = arr[i] + arr[left] + arr[right];
        if (sum == targetSum) {
          result.push_back({arr[i], arr[left], arr[right]});
          // Skip duplicate elements for the second and third numbers
          while (left < right && arr[left] == arr[left + 1]) {
            left++;
          }
          while (left < right && arr[right] == arr[right - 1]) {
            right--;
          }
          left++;
          right--;
        } else if (sum < targetSum) {
          left++;
        } else {
          right--;
        }
      }
    }
    return result;
  }
};

int main() {
  Solution s;
  vector<int> v = {-3, -2, -1, 0, 1, 1, 2};
  vector<vector<int>> r;
  r = s.twoSum(v, 0);
  for (auto o : r) {
    for (auto v : o) {
      cout << v << " ";
    }
    cout << endl;
  }
  return 0;
}