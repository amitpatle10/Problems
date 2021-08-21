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
    int n, k;
    cin >> n >> k;
    vector<int>v(n); 
    // unordered_map<int,stack<int>>check;
    unordered_map<int,int>count;
    int mx = 0;
    // int color = 1;
    for (int i=0; i < n; i++){
        cin >> v[i];
        count[v[i]]++;
        // if (check[v[i]].empty()){
        //     check[v[i]].push(1);
        // }
        // else if (check[v[i]].size()+1<=k){
        //     check[v[i]].push(check[v[i]].top()+1);
        // }        
    }
    unordered_map<int,int>check;
    vector<int>ans(n,0);
    int color;
    vector<bool>visit(n,false);
    for (int i=1;i<k;i++){
        if (count.size()<k){
            for (auto x: ans)cout<<x<<" ";
            cout<<endl;
            return;
        }
        color = k;
        for (int j=0;j<n;j++){
            if (visit[j]==false){
                if (color>0){
                    ans[j] = color;
                    color--;
                }
                count[v[i]]--;
                if (count[v[i]]==0){
                    count.erase(v[i]);
                }                
            }
        }        
    }
    // for (int i=0; i < n; i++){
    //     if (check[v[i]].empty()){
    //         ans.push_back(0);
    //     }
    //     else {
    //         ans.push_back(check[v[i]].top());
    //         check[v[i]].pop();
    //     }
    // }
    


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