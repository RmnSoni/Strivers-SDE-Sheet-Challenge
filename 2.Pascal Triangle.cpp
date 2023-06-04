#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  vector<long long int> row(1,1);
  ans.push_back(row);
  for (int i=1; i<n;i++){
    vector<long long int> row;
    row.push_back(1);
    for (int j=1; j<i; j++){
      row.push_back(ans[i-1][j-1]+ans[i-1][j]);
    }
    row.push_back(1);
    ans.push_back(row);
  }
  return ans;
}
