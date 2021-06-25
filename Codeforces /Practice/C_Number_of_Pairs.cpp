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
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++){
        ans += upper_bound(v.begin(),v.end(),r-v[i]) - v.begin();  // ans += Ai + Aj  <=r
        ans -= lower_bound(v.begin(),v.end(),l-v[i]) - v.begin();  // ans -= Ai + Aj  <=l  (we substract the useless things from it)
        if (l<= 2*v[i] && r>= 2*v[i]){
            ans -- ; // if v[i] + v[i]  is in the range it will be counted twice so we substracted 1 from it 

        }
    }
    cout<<ans/2<<endl;

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