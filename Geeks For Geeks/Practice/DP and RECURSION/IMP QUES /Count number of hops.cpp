


class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long mod = 1000000007;
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for (int i=4;i<=n;i++){
            dp[i] = ((dp[i-1]%mod)+(dp[i-2]%mod)+(dp[i-3]%mod))%mod;
        }
        return dp[n]%mod;
        
        
    }
};
