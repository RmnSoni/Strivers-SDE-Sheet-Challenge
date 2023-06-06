#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	for (int i =0; i<n;i++){
		arr[(arr[i])%n]+=n;
		if (arr[(arr[i])%n]>2*n){
			return arr[i]%n;
		}
	}
	return -1;
}
