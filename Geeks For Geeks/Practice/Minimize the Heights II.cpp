/*
basically the idea is to store all possible elements in an array and sort it and then 
basically using the two pointer method check if in that range all the indices till n 
are present 
then ans would be large ele - small ele 


*/



class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        vector<pair<int,int>>v; 
        for ( int i = 0; i < n; i++ ) {
            if (arr[i] - k >= 0){
                v.push_back({arr[i] - k, i}); 
                
            }
            v.push_back({arr[i] + k, i});
                
        }
        sort(v.begin(),v.end());
        vector<int>check(n,0);
        int right = 0;
        int left = 0;
        int range = 0;
        while(range<n && right < v.size()){
            if (check[v[right].second] == 0){
                range ++;
            }
            check[v[right].second]++;
            right++;
        }
        
        int ans = v[right-1].first - v[left].first;
        
        while(right < v.size()){
            
            check[v[left].second]--;
            if (check[v[left].second]==0)range--;
            left++;
            
            
            while(range<n && right < v.size() ){
                if (check[v[right].second] == 0){
                    range ++;
                }
                check[v[right].second]++;
                right++;
            }
           
            if (range == n){
                
               
                ans = min(ans, v[right-1].first - v[left].first);
            }
            else{
                break;
            }
            
        }
        return ans;
        
        
    }
};