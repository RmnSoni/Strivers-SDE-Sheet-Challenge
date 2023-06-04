#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n= matrix.size();
	int m= matrix[0].size();
	bool firstrow=false;
	for (int i=0; i<m;i++){
		if (matrix[0][i]==0) firstrow=true;
	}
	for (int i=1; i<n; i++){
		for(int j=0;j<m; j++){
			if(matrix[i][j]==0){
				matrix[0][j]=0;
				matrix[i][0]=0;
			}
		}
	}
	for (int i=n-1; i>0; i--){
		for(int j=m-1; j>=0; j--){
			if(matrix[0][j] && matrix[i][0]){
				continue;
			}else matrix[i][j]=0;
		}
	}

	if (firstrow) {
		for (int i=0; i<m ;i++){
			matrix[0][i]=0;
		}
	} 
}