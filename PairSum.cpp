#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   vector < vector < int >>  pair ; 
   unordered_map < int , int> mp ;
   for(auto  i : arr) {
       int c = mp[s-i] ; 
       vector < int> p = {i , s-i} ;
       while(c--){
         pair.push_back(p) ;

       } 
       mp[i]++ ; 
   }
   for(int i = 0 ; i < pair.size() ; i++) {
       vector < int> temp  = pair[i] ; 
       sort(temp.begin() , temp.end()) ; 
       pair[i] = temp ; 
   }
   sort(pair.begin() , pair.end()) ; 
   return pair ;  
}

