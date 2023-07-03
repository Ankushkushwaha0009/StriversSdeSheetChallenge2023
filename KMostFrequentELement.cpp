#include <bits/stdc++.h>
using namespace std;

bool sortbyasc(const pair<int, int> &p1, const pair<int, int> &p2) {
    return p1.second > p2.second;
}
vector<int> KMostFrequent(int n, int k, vector<int> &arr) {
    vector<int> ans;
    unordered_map<int, int> mp;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (auto i : mp) {
        p.push_back({i.first, i.second});
    }
    sort(p.begin(), p.end() , sortbyasc);
    for (int i = 0; i < p.size() and k; i++) {
        ans.push_back(p[i].first);
        k--;
    }
    sort(ans.begin() , ans.end()) ; 
    return ans;
}