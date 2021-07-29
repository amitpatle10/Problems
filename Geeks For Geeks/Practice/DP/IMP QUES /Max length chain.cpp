/* 
You are given N pairs of numbers. In every pair, the first number is always smaller than the second number. A pair (c, d) can follow another pair (a, b) if b < c. Chain of pairs can be formed in this fashion. You have to find the longest chain which can be formed from the given set of pairs. 



*/




/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
struct comp{
    bool operator()(struct val a,struct val b){
        return a.first<b.first;
    }
};

int maxChainLen(struct val p[],int n)
{
    //Your code here
    sort(p,p+n,comp());
    // for (int i=0;i<n;i++){
    //     cout<<p[i].first<<" "<<p[i].second<<endl;
    // }
    int dp[n];
    
    for (int i=0;i<n;i++){
        dp[i] = 1;
    }
    int ans = 1;
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (p[i].first>p[j].second && dp[j]+1>dp[i]){
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(dp[i],ans);
    }
    return ans;
    

}