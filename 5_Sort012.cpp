#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

void sort012(int *arr, int n)
{
   //   Write your code here
   int p0=0;
   int b2=n-1;
   int i=0;
   while (i<=b2){
      switch(arr[i]){
         case 1:
            i++;
            break;
         case 2: 
            arr[i] = arr[b2];
            arr[b2]=2;
            b2--;

            break;
         case 0:
            arr[i] =arr[p0];
            arr[p0]=0;
            p0++;
            i++;
            break;
      }
   }
}
int main(){
   int arr[5]= {0,1,2,1,0};
   sort012(arr,5);
   for(int i=0; i<5;i++){
      cout<< arr[i] << " ";
   }
   return 0;
}