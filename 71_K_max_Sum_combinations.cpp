//https://www.codingninjas.com/studio/problems/k-max-sum-combinations_975322

#include <bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	vector<int> ans;
	priority_queue<pair<int,pair<int,int>>> maxh;
	set<pair<int,int>> comboSet;
	int sum,x,y;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	maxh.push({a[n - 1] + b[n - 1], {n - 1, n - 1}});
    comboSet.insert({n-1,n-1});

    while(k--){
        sum=maxh.top().first;
		ans.push_back(sum);
        x=maxh.top().second.first;
        y=maxh.top().second.second;
		maxh.pop();	
		if(comboSet.find({x-1,y}) ==comboSet.end()){
			maxh.push({a[x - 1] + b[y], {x - 1, y}});
			comboSet.insert({x - 1,y});
		}
		if(comboSet.find({x,y-1})==comboSet.end()){
			maxh.push({a[x]+b[y-1], {x,y-1}});
			comboSet.insert({x,y-1});
		}
	}
	return ans;
}
