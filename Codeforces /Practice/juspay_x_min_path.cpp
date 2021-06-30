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
#define MEM(a, b) memset(a, (b), sizeof(a))
#define int long long
#define float long double
#define deb(x) cout << #x << " " << x << endl
#define deb2(x,y) cout << #x << " " << x << " "  << #y << " " << y << endl
#define deb3(x, y, z) cout << #x << " " << x << " "  << #y << " " << y << " "  << #z << " " << z << endl
using namespace std;
/*

5 5 3 5           
1 2
3 4
2 4
1 4    
2 5


*/
    int city;
    int roades;   
    int t;
    int c;

int get_time(int pass){
    int a;
    int b;
    a = (pass/t)*t;
    b = ceil((float)pass/(float)t)*t;
    if (a%2==0 && b%2!=0){
        return 0;
    }
    else if (a%2!=0 && b%2==0){
        return b - pass;
    }
    else if (pass%2==0){
        return 0;
    }
    else {
        return t;
    }
}
void solve(){

    cin>>city>>roades;
    cin>>t>>c;
    
    vector<int>g[100001];
    for (int i=0;i<roades;i++){
        int a;
        int b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    //bfs;
    
    
    vector<int>visited(city+1,false);
    queue<int>q;
    
    q.push(city);
    visited[city] = true;
    vector<int>ans(city+1,0);
    vector<int>edges(city+1,INT_MAX);
    edges[city] = 0;
    ans[city] = 1;
    bool can_reach_one  = false;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        int e = edges[node];
        
        for (auto x:g[node]){

            
            
            if (e+1 == edges[x]){
                ans[x]++;
                continue;
            }
            if (edges[x]==INT_MAX && visited[x]==false){
                edges[x] = e+1;
                
                visited[x] = true;
                ans[x]++;
                if (x!=1){
                    q.push(x);
                } 
                else{
                    can_reach_one = true;
                }
            } 
                      
            
            
        }

    }
    for (int i=1;i<=city;i++){
        if (ans[i]==INT_MAX || can_reach_one==false){
            ans[i] = 0;
        }
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    


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