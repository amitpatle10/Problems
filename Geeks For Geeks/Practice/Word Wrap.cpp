/*




*/


class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int n = nums.size();
        
        int dp [n];
        int cost ;
        dp[n-1] = 0;
        for (int i = n-2; i >=0; i--){
            dp[i] = INT_MAX;
            
            int spaces = -1;
            for (int j = i; j < n; j++){
                 spaces += nums[j]+1;
                 if (spaces>k){
                     break;
                 }
                 if (j==n-1){
                     cost = 0;
                     
                 }
                 else{
                     cost = (k - spaces)*(k - spaces) + dp[j+1];
                 }
                 
                 dp[i] = min(dp[i], cost);
            }
        }

        return dp[0] ;
    } 
};
