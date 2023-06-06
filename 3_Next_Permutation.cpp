#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int brk=n-2;
    int last =n-1;
    int temp;
    while ( brk>=0){
        if(permutation[brk]>permutation[brk+1]){
            brk--;
        }else break;
    }
    if (brk>=0){
        int check=permutation[brk];
    //find the number just larger than this and swap
    // int low=brk+1;int h=last;
    // int mid;
    // while(low<h){
    //     mid=h+low/2;
    //     if (permutation[mid]>check){
    //         low=mid+1;
    //     }else h=mid-1;
    // }
    // permutation[brk]=permutation[h];
    // permutation[h]=check;
    // 
    int i=brk+1;
        for (i; i<n;i++){
            if(permutation[i]<=check){ 
                break;
            }  
        }permutation[brk]=permutation[i-1];
                permutation[i-1]=check;
    }
    //flip rest brk+1 to n-1;
    
    brk++;
    while(brk<last) {
        temp=permutation[brk];
        permutation[brk]=permutation[last];
        permutation[last] =  temp;
        last--;
        brk++;
    }

    return permutation; 
}