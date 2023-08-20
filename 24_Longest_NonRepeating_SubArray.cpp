#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int ans=1;
    unordered_map<char,int> mp;
    int count=0;
    int starting =-1;
    for(int i=0; i<input.size();i++){
        if(mp.find(input[i])==mp.end()){
            mp.insert({input[i],i});
        }else{            
            starting=max(starting, mp[input[i]]);
            mp[input[i]]=i;
        }
        ans= max(ans,i-starting);
    }
    return ans;
}