#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector < int> ans ;
	map < int , int> mp ;
    for(int i = 0 ; i < m ; i++) {
		  mp[arr1[i]]++; 
	}
	for(int i = 0 ; i < n ; i++) {
		 mp[arr2[i]]++ ; 
	}
    
	for(auto i : mp){
		int occur = i.second ; 
		for(int j = 1 ; j <= occur ; j++){
            ans.push_back(i.first)  ;
		}
	}
    return ans ; 
}

