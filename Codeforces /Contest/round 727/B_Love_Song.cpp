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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    vector<int>check(n,0);
    int run = 0;
    for (int i=0;i<n;i++){
        run += s[i] - 'a' + 1;
        check[i] = run;
    }
    
    
    while(q--){
        int ans = 0;
        int l,r;
        cin>>l>>r;
        
        if (l-2<0){
            ans = check[r-1];
        }
        else {
            ans = check[r-1] - check[l-2];  
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