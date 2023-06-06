#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  return 0;
}

void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
int gapGen(int gap){
	if (gap<2) return 0;
	return(gap/2)+(gap%2);
}
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for (int i=0;i<n; i++){
		arr1[m+i]=arr2[i];
	}
	
	int gap=m+n;
	while(gap){

		for (int i=0; i+gap < arr1.size() ;i++){
			if(arr1[i]>arr1[i+gap]) swap(arr1[i],arr1[i+gap]);
		}

		gap = gapGen(gap);
	}
	
	return arr1;
}