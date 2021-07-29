



class Solution{   
public:
    string longestPalindrome(string s){
        // code here 
        int n = s.size();
        int dp[n+1][n+1];
        string k = s;
        reverse(k.begin(),k.end());
        for (int i=0;i<=n;i++){
            dp[0][i] = 0;
            dp[i][0] = 0;
        }
        int ans = 0;
        int idx = 0;
        int jdx = 0;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (s[i-1]==k[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else {
                    dp[i][j] = 0;
                }
                if (ans<dp[i][j]){
                    ans = dp[i][j];
                    idx = i-1;
                    
                }
            }
        }
        idx = idx - ans + 1;
        string p = s.substr(idx,ans);
        if (ans == 2){
            if (p[0]!=p[1]){
                p = s.substr(0,1);
            }
        }
        
        
        return p;
        
    }
};