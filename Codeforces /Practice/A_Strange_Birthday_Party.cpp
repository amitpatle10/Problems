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
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MOD 1000000007
#define MEM(a, b) memset(a, (b), sizeof(a))
#define int long long
#define float long double
#define deb(x) cout << #x << " " << x << endl
#define deb2(x,y) cout << #x << " " << x << " "  << #y << " " << y << endl
#define deb3(x, y, z) cout << #x << " " << x << " "  << #y << " " << y << " "  << #z << " " << z << endl
using namespace std;

// We sorted the Kth array in Decending order because for the larger index it will be always preferable to use the
// the smallest cost of gift rather than paying the K Ith  cost 
// As smaller indices are at the last there we can easily pay the Kth cost as Gifts of small Cost we already have 
// purchased cant be bought again 


void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>k(n);
    for (int i=0;i<n;i++){
        cin>>k[i];

    }
    sort(k.begin(),k.end(),greater<int>());
    vector<int>cost(m);
    priority_queue<int,vector<int>,greater<int>> q;
    for (int i=0;i<m;i++){
        cin>>cost[i];
        q.push(cost[i]);
    }
    
    
    int ans = 0;
    int count  = 0;
    for (int i=0;i<n;i++){
        if (cost[k[i]-1]<=q.top() || count>=k[i]-1){
            ans += cost[k[i]-1];
            
        }
        else {
            ans += q.top();
            
            q.pop();
            count++;
        }
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