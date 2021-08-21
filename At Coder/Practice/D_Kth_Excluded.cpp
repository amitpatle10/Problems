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
Binary search and prefix 
low stores the number of valid nums less than v[i]
Now 
in    3 5 6 7
low   2 3 3 3
now if i want 5th num
i will check the lower bound of 
5 place using low array here is low.end
so ans will be 7(last num obviously) + (f - low[n-1](total skipped nums))

now if we want 3rd num 
lower bound will be 3 
so ans will be ( (v[ind] - 1) - (low[ind]-f) )


*/

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    
    vector<int>low(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        low[i] = v[i] - (i+1);

    }
    while(q--){
        int f;
        cin>>f;
        int ind  = lower_bound(low.begin(),low.end(),f) - low.begin();
        
        if (ind == n){
            cout<<v[n-1] + (f - low[n-1])<<endl;
        }
        else {
            cout<<(v[ind] - 1) - (low[ind] - f )<<endl;
        }
        
        
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