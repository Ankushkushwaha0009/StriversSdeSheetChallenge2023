//Brute Force 
// #include <bits/stdc++.h>
// ll binarySearch(const vector<ll>& arr, ll l, ll h, ll target) {
//     if (l > h)
//         return -1;
//     ll m = (l + h) / 2;
//     if (arr[m] == target)
//         return m;
//     else if (target < arr[m])
//         return binarySearch(arr, l, m - 1, target);
//     else
//         return binarySearch(arr, m + 1, h, target);
// }
// string fourSum(vector<ll> arr, ll target, ll n) {
//      sort(arr.begin()  , arr.end()) ; 
//     for(ll i= 0 ; i < n ; i++){
//           for(ll j = i+1 ; j < n ; j++){
//                for(ll k = j+1 ; k < n ; k++){
//                      ll temp  = target ; 
//                      ll sum = arr[i] + arr[j] + arr[k] ;
//                      temp -= sum ; 
//                      if(binarySearch(arr ,  k + 1 , n-1 , temp)  != -1 ){
//                          return "Yes" ;   
//                      } 
//                 }
//           }
//     }
//     return "No" ; 
// }

//Optimal
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
     sort(arr.begin()  , arr.end()) ; 
     for(int i= 0 ; i < n ; i++){
          if (i > 0 && arr[i] == arr[i - 1]) continue;
          for(int j = i+1 ; j < n ; j++){
                if (j > i + 1 && arr[j] == arr[j - 1]) continue;
               if (i > 0 && arr[i] == arr[i - 1]) continue;
               int target_1 = target - arr[j] - arr[i] ; 
               int l = j+1  ; 
               int r = n-1  ; 

               while (l < r) {
                    int two_sum = arr[l] + arr[r];
                    if (two_sum < target_1) {
                        l++;
                    } else if (two_sum > target_1) {
                        r--;
                    } else {
                        return "Yes"  ;
                    }
                }
          }
    }
    return "No" ; 
}

