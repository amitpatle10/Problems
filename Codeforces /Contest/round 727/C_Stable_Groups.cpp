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
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 1;
    sort(arr,arr+n);
    vector<int>d;
    for (int i = 1;i<n;i++){
        int diff = arr[i] - arr[i-1];
        if (diff <= x){
            continue;
        }
        ans++;
        d.push_back(diff);

    }
    sort(d.begin(),d.end());
    for (int i=0;i<d.size();i++){
        int possible = (d[i]-1)/x;
        if (possible<=k){
            k-=possible;
            ans--;
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