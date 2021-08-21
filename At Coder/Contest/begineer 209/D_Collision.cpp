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

 considering it as a tree we can simply 
 cal the dept and dept(node1) - dept(2) 
 if it is odd then meet at Road else 
 they meet ar Town

*/


void solve(){
    
    int n;
    int q;
    cin >> n;
    cin >> q;
    int dp[n+1][n+1];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==j)dp[i][j] = 0;
            else{
                dp[i][j] = INT_MAX;
            }
        }
    }
    for (int i=0 ; i<n-1 ; i ++ ) {
        int a,b;
        cin >> a >> b;
        dp[a][b] = 1;
        dp[b][a] = 1;
    }
    for ( int k = 1 ; k <= n ; k++){
        for ( int i=1; i <= n ; i++){
            for (int j=1; j <= n; j++){
                dp[i][j]  = min(dp[i][j],dp[i][k]+dp[k][j]);
                
            }
        }
    }
    while(q--){
        int c,d;
        cin >> c >> d;
        // deb3(c,d,dp[c][d]);
        if (dp[c][d]%2==0 ){

            cout<<"Town"<<endl;
        }
        else {
            cout<<"Road"<<endl;
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}