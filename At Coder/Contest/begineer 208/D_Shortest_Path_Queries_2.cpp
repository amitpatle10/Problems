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

vector< vector<int> >g[401];

int city;

int bfs(int i,int j,int k,vector<int>dist){
    queue<int>q;
    q.push(i);
    
    while(!q.empty()){
        int t = q.front();
        int covered  = dist[t];
        q.pop();        
        
        for (auto c : g[t]){

            int d = c[1];
            int node  = c[0];

            if ((covered + d < dist[node]) && ((node<=k) || (node==j))){
                dist[node] = covered + d;
                
                if (node!=j){
                    q.push(node);
                }
                
            }  
                         
            

        }       


    }
    if (dist[j]==INT_MAX){
        return 0;
    }
    else {
        return dist[j];
    }
}

void solve(){
    int roades;
    cin>>city>>roades;
    
    
    for(int i=0;i<roades;i++){
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});

    }
    int ans = 0;
    
    for (int k=1;k<=city;k++){
        for (int i=1;i<=city;i++){
            for (int j=1;j<=city;j++){
                
                if (i==j)continue;
                vector<int>dist(401,INT_MAX);
                dist[i] = 0;
                ans += bfs(i,j,k,dist);              
            
            }
        }
    }
    cout<<ans<<endl;

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