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

unordered_map<string,string>mp;


void solve(){
    int n;
    cin>>n;
    vector<string>names;
    
    while(n--){
        string old;
        string newp;
        cin>>old>>newp;
        names.push_back(old);
        mp[old] = newp;
        mp[newp] = "";

        
    }
    unordered_map<string,bool>check;
    vector<pair<string,string>> ans;
    for (auto x:names){
        if (!check[x]){
            string f = x;
            string g = x;
            while(!check[g] && mp[g]!=""){
                check[g] = true;
                g = mp[g];
                
                
            }
            if (f!=g){
                ans.push_back(make_pair(f,g));
            }
            

        }
        
        
    }
    cout<<ans.size()<<endl;
    for (auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
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