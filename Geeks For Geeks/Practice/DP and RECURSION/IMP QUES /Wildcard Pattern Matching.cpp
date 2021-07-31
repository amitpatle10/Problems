/*

Given two strings 'str' and a wildcard pattern 'pattern' of length N and M respectively,  You have to print '1' if the wildcard pattern is matched with str else print '0' .

The wildcard pattern can include the characters ‘?’ and ‘*’
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)

Note: The matching should cover the entire str (not partial str).

*/

class Solution{
  public:
/*You are required to complete this method*/
    
    int wildCard(string pattern,string str)
    {
        
        int n = str.size();
        int m = pattern.size();
        bool dp[n+1][m+1];
        for (int i=0;i<=n;i++){
            dp[i][0] = false;
        }
        int f = 0;
        for (int i=0;i<=m;i++){
            dp[0][i] = false;
            if (i>0){
                if (pattern[i-1]!='*'){
                    f = 1;
                }
                if (pattern[i-1]=='*' && f==0){
                    dp[0][i] = true;
                }
            }
            
        }
        dp[0][0] = true;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if ((str[i-1]==pattern[j-1]) || (pattern[j-1]=='?')){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if (pattern[j-1]=='*'){
                    dp[i][j] = (dp[i-1][j]||dp[i][j-1]);
                }
                else {
                    dp[i][j] = false;
                }
            }
        }
        // cout<<dp[n][m]<<endl;
        return dp[n][m];
    }
};
