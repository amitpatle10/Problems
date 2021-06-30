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
int city,roades;
int t,c;
vector<int>g[100001];
vector<int>all_possible;

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
    


void dfs(int i,vector<int>visited,int time){
    if (i==city){
        all_possible.push_back(time);
        return;
    }
    visited[i] = true;
    for (auto x:g[i]){
        int extra = get_time(time + c);
        if (visited[x]==false){
            if (x==city){
                dfs(x,visited,time+c);
                continue;
            }
            dfs(x,visited,time + c + extra);
        }
    }
    return;


}

void solve(){
    
   
    cin>>city>>roades;
    
    cin>>t>>c;
    
    
    for (int i=0;i<roades;i++){
        int a;
        int b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    //dfs all possible paths sum;
    
    vector<int>visited(city+1,0);
    
    dfs(1,visited,0);
   
    sort(all_possible.begin(),all_possible.end());
    if (all_possible.size()<=1){
        cout<<-1<<endl;
    }
    else {
        int ans  = -1;
        for (int i=0;i<all_possible.size();i++){
           
            if (all_possible[i]!=all_possible[0]){
                ans = all_possible[i];
                
            }
        }
        cout<<ans<<endl;
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