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
    int n ; 
    cin >> n ; 
    vector<pair<int,int>> check; 
    for (int i = 0 ; i < n; i ++){
        int a, b; 
        cin >> a >> b; 
        check.push_back(make_pair(a, b)); 
        
    }
    int ans = 0;
    sort(check.begin(),check.end(),greater<pair<int,int> >());
    for (int i = 0; i < n; i ++){
        int count = (check[i].second/4) * 4;
        ans += (count * check[i].first ) ; 
                      
    }
    for (int i = 1; i < n ; i ++){
        ans += ((check[i].second%4)/2)*check[i].first + ((check[i-1].second%4)/2)*check[i-1].first;
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