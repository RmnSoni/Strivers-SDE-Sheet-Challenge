#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){

   sort(arr.begin(), arr.end());
   int aage = 0;
   int peeche = arr.size()-1;
   int check;
   vector<vector<int>> ans;

   while (aage<peeche){
      if ( arr[aage]+arr[peeche] == s ) {
         ans.push_back({arr[aage],arr[peeche]});
         check = peeche-1;
         while(check>aage){
            if( arr[aage]+arr[check] == s ){
            vector<int> temp = {arr[aage],arr[check]};
            ans.push_back(temp);
            }else break;
         check--;
         }
         aage++;
      }
      else if (arr[aage]+arr[peeche] < s ) {
         aage++;
      }else {
         peeche--;
      }
   }
   return ans;
}