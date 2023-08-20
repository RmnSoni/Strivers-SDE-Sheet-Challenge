#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  int ans=0;

  unordered_map<int,int> hashmp;
  int currsum=0;
  for(int i=0; i<arr.size();i++){

    currsum+=arr[i];
    if(currsum==0){
      ans=max(ans,i+1);
    }else{
      if(hashmp.find(currsum)==hashmp.end()){
        hashmp.insert({currsum,i});
      }else{
        ans=max(ans, i - hashmp[currsum]);
      }
    } 
  }


  return ans;
}