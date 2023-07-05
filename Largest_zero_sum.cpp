#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int>& arr) {
  int _max = 0;
  unordered_map<int, int> mp;
  int n = arr.size();
  int sum = 0;
  for (int i = 0; i < n ; i++) {
    sum += arr[i];
    if (sum == 0) {
      _max = max(_max, i + 1);
    } else { 
      if (mp.find(sum) == mp.end()) {
        mp[sum] = i;
      } else {
        _max = max(_max, i - mp[sum]);
      }
    }
  }
  return _max;
}


