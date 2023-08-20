#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int sm=prices[0];
    int ans=0;
    for(int i=0; i<prices.size();i++){
        if (prices[i]<sm){
            sm=prices[i];
            continue;
        }else ans=max(ans,prices[i]-sm);
    }
    return(ans);
}