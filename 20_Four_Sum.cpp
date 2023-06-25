#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
  sort(arr.begin(),arr.end());
  for (int i = 0; i < n - 3; i++) {
    for (int j = i + 1; j < n - 2; j++) {
      int left = j + 1;
      int right = n - 1;
      int target2 = target - arr[i] - arr[j];
      while (left < right) {
        
        if (arr[left] + arr[right]  == target2) {
          return "Yes";
        } else if (arr[left] + arr[right]  < target2)
          left++;
        else
          right--;
      }
    }
  }
  return "No";
}
