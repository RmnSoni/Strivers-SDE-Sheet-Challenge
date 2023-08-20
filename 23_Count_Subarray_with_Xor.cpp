#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int ans =0;
    int count=0;
    unordered_map<int,int> mp;
    mp.insert({0,1});
    for (int i =0; i<arr.size();i++){
        ans=ans^arr[i];
        if(mp.find(ans^x)!=mp.end()){
            count+=mp[ans^x];
        }
        if(mp.find(ans)==mp.end()) mp.insert({ans,0});      
        mp[ans]++;
    }
    return count;
}