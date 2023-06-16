//Brute Force  ... 

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int max_ = 0 ; 
    for(int i = 0 ; i < prices.size() ; i++) {
        int __max = prices[i] ; 
          for(int j = i+1 ; j < prices.size() ; j++){
                 __max  = max(__max , prices[j]) ; 
          }
          max_ = max(max_ , (__max - prices[i])) ; 
    }
    return max_ ; 
}

//Optimal solution 

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minstock = prices[0]  , profit = 0 ;
    for(int i = 1 ; i < prices.size()  ; i++) {
          int cost = prices[i] - minstock ; 
          profit = max(cost , profit) ; 
          minstock = min(minstock , prices[i]) ; 
    }
    return profit  ; 
}

