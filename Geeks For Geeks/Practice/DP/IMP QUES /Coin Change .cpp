


class Solution
{
  public:
    long long int count( int arr[], int m, int n )
    {
        //code here.
        long long dp[m+1][n+1]; //m--->size(). n--->amount
        for (int i=0;i<=n;i++){
            dp[0][i] = 0;
        }
        for (int i=0;i<=m;i++){
            dp[i][0] = 1;
        }
        for (int i=1;i<=m;i++){
            for (int j=1;j<=n;j++){
                if (arr[i-1]<=j){
                    dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j]; 
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[m][n];
        
    }
};
