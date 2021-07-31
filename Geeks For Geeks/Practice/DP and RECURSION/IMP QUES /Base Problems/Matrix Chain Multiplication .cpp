


class Solution{
public:
    int dp[101][101];
    
    int solve(int arr[],int i,int j){
        if (i>=j){
            return 0;
        }
        if (dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int min_val = INT_MAX;
        for (int k=i;k<j;k++){
            int temp  = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
            min_val = min(min_val,temp);
        }
        dp[i][j] = min_val;
        return dp[i][j];
        
        
    }
    
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int ans = solve(arr,1,n-1);
        return ans;
        
        
    }
};
