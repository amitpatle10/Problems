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
    int a,b;
    int c,d; 
    int f,g;
    cin>>a>>b>>c>>d>>f>>g;

    int ans = abs(c-a) + abs(d-b);

    if (a!=c && b!=d){
        cout<<ans<<endl;
        return;
    }
    
    
    if ((b==g&&g==d)&&((a-f>0 && (f-c > 0)) || ((a-f<0)&& (f-c <0)))){
        ans +=2;
    }
    else if ((a==f&&f==c)&&(((b-g>0) && (g-d>0)) || ((b-g < 0) && (g - d < 0)))){
        ans +=2;
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