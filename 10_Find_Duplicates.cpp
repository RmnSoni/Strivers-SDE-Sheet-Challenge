#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[(arr[i]) % n] += n;
		if (arr[(arr[i]) % n] > 2 * n)
			return arr[i] % n;
	}
	return -1;
}
int main()
{
	vector<int> ans{1, 2, 2, 2, 2};
	cout << findDuplicate(ans, 5);
	return 0;
}