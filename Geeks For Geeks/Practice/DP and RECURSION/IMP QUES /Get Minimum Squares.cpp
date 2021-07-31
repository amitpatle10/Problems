/*


Given a number N. Find the minimum number of squares of any number that sums to N. For Example: If N = 100 , N can be expressed as (10*10) and also as (5*5 + 5*5 + 5*5 + 5*5) but the output will be 1 as minimum number of square is 1 , i.e (10*10).



*/


class Solution{
	public:
	int MinSquares(int n)
	{
	    // Code here
	    vector<int>arr;
	    for (int i=1;i*i<=n;i++){
	        arr.push_back(i*i);
	    }
	    int s = arr.size();
	    int dp[s+1][n+1]; //s-->size n-->total
	    for (int i=0;i<=s;i++){
	        dp[i][0]=0;
	    }
	    for (int i=0;i<=n;i++){
	        dp[0][i] = INT_MAX;
	    }
	    
	    for (int i=1;i<=s;i++){
	        for (int j=1;j<=n;j++){
	            if (arr[i-1]<=j){
	                dp[i][j] = min(1+dp[i][j-arr[i-1]],dp[i-1][j]);
	            }
	            else {
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    return dp[s][n];
	}
};
