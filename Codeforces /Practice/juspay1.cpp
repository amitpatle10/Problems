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
1 3 
2 4
1 4    
2 5

*/

int get_time(int pass,int t){
    return t - pass%t;
}

void solve(){
    int city;
    int roades;
    cin>>city>>roades;
    int t;
    int c;
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
    
    vector<int>nodes(city+1,INT_MAX);
    vector<int>visited(city+1,false);
    queue<int>q;
    nodes[1] = 0;
    q.push(1);
    visited[1] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        int dist = nodes[node];
        
        for (auto x:g[node]){
            int extra  = get_time(dist+c,t);
            
            int time_spent = dist + c + extra;

            if (x==city){
                
                nodes[x] = min(nodes[x],time_spent - extra);
                
                continue;
            }
            
            if (visited[x]==true){
                nodes[x] = min(nodes[x],time_spent);
                continue;
            }
            
            visited[x] = true;
            nodes[x] = time_spent;
            q.push(x);
        }

    }
    
    cout<<nodes[city]<<endl;


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