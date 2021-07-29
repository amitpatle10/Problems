

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n];
       int pos = 0;
       dp[0] = a[0];
       for (int i=1;i<n;i++){
           if (a[i]>dp[pos]){
               dp[pos+1] = a[i];
               ++pos;
           }
           else {
               int ind = lower_bound(dp,dp+pos+1,a[i]) - dp;
               dp[ind] = a[i];
           }
       }
    //   for (int i=0;i<=pos;i++){
    //       cout<<dp[pos]<<" ";
    //   }
    //   cout<<endl;
       return pos+1;
    }
};