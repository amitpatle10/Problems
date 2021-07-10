#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define MOD 1000000007
#define int long long
#define float long double
#define deb(x) cout << #x << " " << x << endl
#define deb2(x,y) cout << #x << " " << x << " "  << #y << " " << y << endl
#define deb3(x, y, z) cout << #x << " " << x << " "  << #y << " " << y << " "  << #z << " " << z << endl
using namespace std;

/*

*/




void solve(){
    string s;
    cin>>s;
    int n = s.size();
    
    long long dp[n+1][2];
    dp[0][0] = 0;
    dp[0][1] = 0;
    int ans =  0;
    for (int i=1;i<=n;i++){
        if (s[i-1]=='1'){
            dp[i][1] = dp[i-1][0] + 1LL;
            dp[i][0] = 0;
        }
        else if (s[i-1]=='0'){
            dp[i][0] = dp[i-1][1] + 1LL;
            dp[i][1] = 0;
        }
        else {
            dp[i][0] = dp[i-1][1] + 1LL;
            dp[i][1] = dp[i-1][0] + 1LL;
        }
        ans += max(dp[i][0],dp[i][1]);
    }

    cout<<ans<<endl;

    
    



}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}