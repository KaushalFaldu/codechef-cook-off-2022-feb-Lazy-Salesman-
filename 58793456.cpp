
#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main(){

   int k;
   cin>>k;
   while(k--){
       int n,x;
       cin>>n>>x;
       int arr[n];
       for (int i =0;i<n;i++){
           cin>>arr[i];
           
       }
       sort (arr,arr+n);
       int temp=0,sum = 0;
       for (int i= n - 1;i>=0;i--)
       {
           sum = sum +arr[i];
           temp++;
           if(sum>=x){
               break;
           }
       }
       int ans;
       ans = n - temp;
       cout<<ans<<endl;
   }
    return 0;
}