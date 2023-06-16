#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n){       
    int swapIndex1 , swapIndex2  ;

    for(swapIndex1 = n-2 ; swapIndex1 >= 0 ; swapIndex1--) {
          if(permutation[swapIndex1] < permutation[swapIndex1 + 1]){
                break ; 
          }
    }
    if(swapIndex1 < 0)  {
        reverse(permutation.begin() , permutation.end()) ; 
    }else{

        for(swapIndex2 = n-1 ; swapIndex2 > swapIndex1 ; swapIndex2--) {
              if(permutation[swapIndex2]  > permutation[swapIndex1]){
                    break ; 
              }
        }
        swap(permutation[swapIndex1] , permutation[swapIndex2])  ; 
        reverse(permutation.begin() + swapIndex1 + 1 , permutation.end()) ; 

    }
    return permutation ; 
}

