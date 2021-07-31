



class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[201][201];
    
    int solve(int i,int j,int eggs){
        if (dp[i][j]!=-1){

            return dp[i][j];
        }
        if (eggs==1){
            return j-i + 1;
        }
        else if (i==j){
            return 1;
        }
        
        int attempts = INT_MAX;
        for (int k = i;k<=j;k++){
            
            int egg_not_cracked = solve(k+1,j,eggs) + 1;
            int egg_cracked = solve(i,k-1,--eggs) + 1;
            int temp = max(egg_not_cracked,egg_cracked);

            attempts = min(attempts,temp);
        }

        dp[i][j] = attempts; 
        return dp[i][j];
        
    }
    
    int eggDrop(int n, int k) 
    {
        // your code here
        // n ---->eggs 
        // k ---->floors
        
        memset(dp,-1,sizeof(dp));
        int ans = solve(1,k,n);
        return ans;
        
    }
};