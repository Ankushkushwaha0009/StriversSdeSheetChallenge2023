#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) {
      
      vector<vector<long long int>> ans ; 
      vector < long long int > a = {1}  ; 
      ans.push_back(a) ; 
      if(n == 1) return ans ;  

      for(long long  i = 2 ; i <= n ; i++) { 
           vector < long long int >& lastrow  = ans[ans.size()-1] ; 
           vector < long long int > newrow ;

           newrow.push_back(lastrow[0]) ;
           
          for( long long int  j = 1 ; j < lastrow.size()  ; j++) {
                newrow.push_back(lastrow[j-1] + lastrow[j])  ; 
          }

          newrow.push_back(lastrow[lastrow.size()-1])  ; 
          ans.push_back(newrow) ; 

      }
    return ans  ; 
}




