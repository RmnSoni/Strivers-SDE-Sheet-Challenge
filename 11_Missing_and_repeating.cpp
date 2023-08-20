/*
https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?
Problem Statement: 
You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.
*/
//------------------------------------------------------------
// Write your code here 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

	int k=n+1;
	int v; // getting index from remainder
	bool flag =true;
	int sum=(n*(n+1))/2, r, m;
	for (int i =0; i<n ; i++)
	{
		sum-=arr[i]%k;
		 v = (arr[i]%k)-1;
		if (flag) 
		{
			arr[v] += k;
			if (arr[v] > 2 * k)
			{
				flag = false;
				r = arr[i] % k;
			}
		}
	}
	m=sum+r;
	return (make_pair(m,r));	
}


int main(){
  return 0;
}