



class Solution {
    
	public:
	    const int mod= 1e9+7;
        long long dp[10004];
	    int solve(string s,int n){
	        if (s[0] == '0' || s[0]== ' ')
                return 0;
            if (n == 0 || n == 1)
                return 1;
            
            if(dp[n]!=-1)return dp[n]%mod;
            
            int count = 0; 
            
            if (s[n - 1] > '0')
            count = solve(s, n - 1)%mod;
            
            if (s[n - 2] == '1' || (s[n - 2] == '2' && s[n - 1] < '7'))
            count = (count%mod + solve(s, n - 2)%mod)%mod;
            
            return dp[n] = count%mod;
	        
	        
	    }
		int CountWays(string str){
		    // Code here
		    memset(dp,-1,sizeof(dp));
		    int n=str.size();
		    int ans = solve(str,n);
		    return ans;
		}

};