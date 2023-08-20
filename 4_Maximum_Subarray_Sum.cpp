#include <bits/stdc++.h>
using namespace std;

int main(){
  return 0;
}

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxsum=0;
    long long currsum=0;
    
    for(int i=0; i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if (currsum<0) currsum=0;
    }

    return maxsum;
}

