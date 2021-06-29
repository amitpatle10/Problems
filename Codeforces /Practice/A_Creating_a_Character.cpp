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

in case ans is negative it is 
0 no possible case 

s + x = i + e - x + 1; <--- should hold
hence the ans could 
be e - max((e+i-s+2)/2 ,0) + 1; ceiled function

or 0 or no valid case
*/

void solve(){
    int s,i;
    cin>>s>>i;
    int e;
    cin>>e;
    int ans  = 0;
    int g = max((i+e-s+2)/2  ,(long long)0);


    int temp = e-g+1;
    ans = max((long long)0,temp);
   

    
    
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