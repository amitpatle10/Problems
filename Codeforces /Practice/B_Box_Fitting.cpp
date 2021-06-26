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
    int W;
    cin>>n>>W;
    multiset<int>s;
    for (int i=0;i<n;i++){
        int m;
        cin>>m;
        s.insert(m);
    }
    
    int check = W;

    int ans = 1;
    while(s.size()){
        auto i = s.upper_bound(check);
        if (i!=s.begin()){
            i--;
            int val = *i;
            check -= val;
            s.erase(i);
        }
        else {
            check  = W;
            ans ++;
        }
        
        
    }
    cout<<ans<<endl;
    
    
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