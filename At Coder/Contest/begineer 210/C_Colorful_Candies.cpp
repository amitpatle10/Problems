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
    int n;
    cin >> n ;
    int k; 
    cin >> k ; 
    int colors[n + 1];
    for (int i = 0; i < n; i++){
        cin >> colors[i]; 

    }
    unordered_map< int , int > check; 
    for (int i = 0 ; i < k ; i ++){ 
        check[colors[i]]++;
    }
    int ans = check.size() ; 
    for (int i = k ; i < n; i ++){
        
        check[colors[i - k]]--; 
        if (check[colors[i-k]]==0)check.erase(colors[i-k]);
        check[colors[i]]++;

        ans = max( ans , (long long)check.size());     


    }
    cout << ans << endl;
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