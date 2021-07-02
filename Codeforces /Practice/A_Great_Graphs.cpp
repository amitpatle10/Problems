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
#define ll long long 
#define ld long double
#define deb(x) cout << #x << " " << x << endl
#define deb2(x,y) cout << #x << " " << x << " "  << #y << " " << y << endl
#define deb3(x, y, z) cout << #x << " " << x << " "  << #y << " " << y << " "  << #z << " " << z << endl
using namespace std;

/*
In this problem we want to minimize the cost 
so we built min positive roads and maximum 
negative roads
let pastures be a b c d 
The optimal way will be 

0 ---> a ---> b ----> c ----> d

this will be positive ways
and construct negative ways from 
every pastures to previous every pastures 

eg : b --> a 
     b --->0


*/

int pastures[1000][1000];

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans  = 0;
    ll sum  = 0;
    sort(v.begin(),v.end());
    ll neg_roads[n];
    neg_roads[0] = 0;
    for (int i=1;i<n;i++){        
        neg_roads[i] = neg_roads[i-1] + (v[i] - v[i-1])*i;    
        ans  -= neg_roads[i] ;   
    }
    ans += v.back();
    
    
    cout<<ans<<endl;









}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}