#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
       vector < vector < int>> mergedIntervals ; 
       if(intervals.size() == 0) return mergedIntervals ;
       sort(intervals.begin() , intervals.end()) ;  
       vector < int> &tempIntervals = intervals[0] ; 
       for(auto i : intervals) {
            if(i[0] <= tempIntervals[1]){
                tempIntervals[1] = max(i[1] , tempIntervals[1])  ; 
            }
            else{
                mergedIntervals.push_back(tempIntervals) ; 
                tempIntervals = i ; 
            }
       }
        mergedIntervals.push_back(tempIntervals) ; 
        return mergedIntervals ;
}





