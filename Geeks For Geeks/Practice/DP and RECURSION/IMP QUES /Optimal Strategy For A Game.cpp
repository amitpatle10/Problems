



int dp[1001][1001];

int solve(int arr[],int i,int j){
    if (dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if (i>=j){
        return arr[i];
    }
    
    if (i+1==j){
        return max(arr[i],arr[j]);
    }
    
    dp[i][j] = max(arr[i] + min(solve(arr,i+2,j),solve(arr,i+1,j-1)),
                    arr[j] + min(solve(arr,i,j-2),solve(arr,i+1,j-1))    );
    return dp[i][j];
}

long long maximumAmount(int arr[], int n) 
{
    // Your code here
    
    memset(dp,-1,sizeof(dp));
    int ans = solve(arr,0,n-1);
    return ans;
    
    
}
