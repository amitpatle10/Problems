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


int cost;


struct comp { 
    bool operator ()(vector<int> & a , vector <int> &b){
        return a[0] + cost*(a[1]+a[2])  < b[0] + cost*(b[1]+b[2]);
    }
};

void solve(){
    int r, c; 
    cin >> r >> c >> cost;  
    int temp;
    
    vector < vector < int > > v;
    for (int i = 0; i < r ; i++){
        for (int j = 0; j < c; j++){
            cin>>temp;
            v.push_back({temp,i,j});
        }
    }
    sort(v.begin(), v.end(),comp());

    int ans  = INT_MAX;
    
    for (int i = 1;i < v.size(); i++){
        ans = min (ans, v[i][0] + v[i-1][0] + (cost*(abs (v[i][1] - v[i-1][1]) + abs (v[i][2] - v[i-1][2]))));
        // cout<<v[i][0]<<v[i][1]<<v[i][2]<<endl;
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