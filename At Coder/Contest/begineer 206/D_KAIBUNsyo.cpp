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



void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>visit(200001,0);
    for (int i=0;i<n;i++){
        cin>>v[i];
        visit[v[i]] = 1;
    }
    vector<int>adj[200001];
    int l=0;
    int r=n-1;
    
    while(l<r){
        if (v[l]!=v[r]){
            adj[v[l]].push_back(v[r]);
            adj[v[r]].push_back(v[l]);
        }
        l++;
        r--;
    }
    int ans = 0;
    for (int i=0;i<200001;i++){
        if (visit[i]==1){
            queue<int>q;
            q.push(i);
            int count = 0;
            while(q.size()){
                int t = q.front();
                q.pop();
                visit[t] = 0;
                for (auto x:adj[t]){
                    if (visit[x]==1){
                        count++;
                        q.push(x);
                        visit[x] = 0;
                    }
                }
                
            }
            ans+=count;
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