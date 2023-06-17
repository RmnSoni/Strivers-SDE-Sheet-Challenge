bool searchMatrix(vector<vector<int>>& mat, int target) {
int n = mat.size();
int m = mat[0].size();

if(mat[0][0]>target) return false;
if(mat[n-1][m-1]<target) return false;

int l = 0 , mid , h=n-1 ;

while ( l <= h ){
    mid = (l+h)/2;
    if(mat[mid][0]== target) return true;
    if(mat[mid][0] > target) h = mid - 1;
    if(mat[mid][0] < target) l = mid + 1;
}
int smaller =  h;

l = 0 ;
h = m-1 ;

while(l<=h){
    mid = (l+h)/2;
    if(mat[smaller][mid] == target) return true;
    if(mat[smaller][mid] > target) h = mid - 1;
    if(mat[smaller][mid] < target) l = mid + 1;
}

return false;
}