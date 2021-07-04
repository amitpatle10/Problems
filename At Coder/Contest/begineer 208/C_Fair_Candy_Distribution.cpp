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
    int n,k;
    cin>>n>>k;
    vector<int>ids(n);
    for (int i=0;i<n;i++){
        cin>>ids[i];
    }
    vector<int>orig = ids;
    sort(ids.begin(),ids.end());
    unordered_map<int,int>ans;
    int initial  = k/n;
    int rem = k%n;
    
    for (int i=0;i<rem;i++){
        ans[ids[i]]++;
    }
    
    

    for (auto x:orig){
        cout<<ans[x] + initial<<endl;
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