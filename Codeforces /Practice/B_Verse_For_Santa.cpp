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

// Here we want to print the number of the verse we want to skip 
// so here we want to skip the first wall obviously 
// wall here is biggest number 


void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>verse(n);
    for (int i=0;i<n;i++){
        cin>>verse[i];

    }
    
    int part = 0;
    int total = 0 ; 
    int max_ele = 0;
    for (int i=0;i<n;i++){
        total += verse[i];
        if (verse[i]>max_ele){
            max_ele = verse[i];
            part = i;
        }
        if (total>s){
            cout<<part+1<<endl;
            return;
        }
    }
    cout<<0<<endl;
    
    
    
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