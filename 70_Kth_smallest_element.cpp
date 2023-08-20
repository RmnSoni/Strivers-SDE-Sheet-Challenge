// https://www.codingninjas.com/studio/problems/kth-smallest-and-largest-element-of-array_1115488


#include <bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k){
	vector<int> ans;

	priority_queue<int> maxh;
	priority_queue<int,vector<int>,greater<int>> minh;

	for(int i=0;i<n;i++){
		maxh.push(arr[i]);
		minh.push(arr[i]);
		if(maxh.size()>k) maxh.pop();
		if(minh.size()>k) minh.pop();
	}

	ans.push_back(maxh.top());
	ans.push_back(minh.top());
	return ans;
}