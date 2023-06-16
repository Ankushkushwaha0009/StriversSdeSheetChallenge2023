#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
     int meh = 0 , msf = INT_MIN ; 
     for(int i = 0 ; i <  n ; i++) {
         meh += arr[i] ; 
         if(meh < arr[i]) meh = arr[i] ; 
         if(msf < meh) msf = meh  ; 
     }
     return msf ; 

}