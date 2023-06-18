#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
  
    long long ans = 0 ; 
    for(int i =  0 ; i < n ; i++) {
         long long c = 0 ; 
         for(int j = i+1  ; j <  n ; j++) {
                if(arr[i] >  arr[j]) c++ ; 
         }
         ans += c ; 
    }
    return ans ;
}



