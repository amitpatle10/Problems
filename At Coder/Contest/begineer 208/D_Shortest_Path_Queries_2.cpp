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

int g[401][401];

int city;

int bfs(int i,int j,int k){
    queue<int>q;
    q.push(i);
    
    while(!q.empty()){
        int t = q.front();
        q.pop();
        bool reach = false;
        for (int c=1;c<=city;c++){
            if (c==t)continue;            
                
            if ((g[i][c] > g[i][t]+g[t][c]) && ((c<=k) || (c==j))){
                g[i][c] = g[i][t]+g[t][c];
                if (c!=j){
                    q.push(c);
                }
                
            }  
            reach  = true;              
            

        }
        if (reach==false){
            return 0;
        }


    }
    return g[i][j];
}

void solve(){
    int roades;
    cin>>city>>roades;
    
    for (int i=1;i<=city;i++){
        for (int j=1;j<=city;j++){
            if (i==j)g[i][j] = 0;
            else{
                g[i][j] = INT_MAX;
            }
        }
    }
    for(int i=0;i<roades;i++){
        int a,b,c;
        cin>>a>>b>>c;
        g[a][b] = c;
        g[b][a] = c;

    }
    int ans = 0;
    for (int k=1;k<=city;k++){
        for (int i=1;i<=city;i++){
            for (int j=1;j<=city;j++){
                if (i==j)continue;
                else if (g[i][j]!=INT_MAX){
                    ans += city * g[i][j];
                }
                else {
                    ans += bfs(i,j,k);
                    deb3(i,j,bfs(i,j,k));
                }
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