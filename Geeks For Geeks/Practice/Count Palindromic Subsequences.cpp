
https://media.geeksforgeeks.org/wp-content/uploads/20190804162927/00011.jpg

/// modular substraction = ((a - b)%mod + mod)%mod

//method 1 : TLE 

    int mod = 1e9 + 7;
    long long dp[1001][1001];
    long long solve ( string s , int i , int j ){
        
        if (i > j)return 0;
        
        if (dp[i][j]!=-1){
            return dp[i][j];
        }
        if ( i == j ){
            return dp[i][j] = 1;
        }
        if (s[i]==s[j]){
            return dp[i][j] = (solve(s,i+1,j)%mod + solve(s,i,j-1)%mod + 1)%mod;
            
        }
        else { 
            return dp[i][j] = (solve(s,i+1,j)%mod + solve(s,i,j-1)%mod - solve(s,i+1,j-1)%mod)%mod;
        }
        return 0 ;
    }
    long long int  countPS(string str)
    {
       //Your code here
       memset(dp,-1,sizeof(dp));
       long long ans = solve(str, 0 , str.size()-1);
       return ans;
       
    }


//method 2: Accepted


    long long int  countPS(string str)
    {
       //Your code here
       int n = str.size();
       long long mod = 1e9 + 7;
       long long dp [n+1][n+1];
       memset(dp,0,sizeof(dp));
       for (int i = 0; i <= n; i++){
           dp[i][i] = 1;
       }
       
       for (int l = 2; l<=n; l++){
           for (int i = 0; i <= n - l ; i++){
               int j = i + l - 1;
                if (str[i] == str[j]){
                    dp[i][j] = ((dp[i+1][j]%mod + dp[i][j-1]%mod)%mod + 1)%mod;
                }
                else {
                    long long a = (dp[i+1][j]%mod + dp[i][j-1]%mod)%mod;
                    dp[i][j] = ((a - dp[i+1][j-1])%mod + mod)%mod;
                }
           }
       }
       return dp[0][n-1]%mod;
       
    }
