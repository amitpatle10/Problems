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
// int cal(int a,int p){
//     if (p==0){
//         return 1;
//     }
//     if (p%2==0){
//         return ((cal(a,p/2)%MOD)*(cal(a,p/2)%MOD))%MOD;
//     }
//     else{
//         return ((cal(a,p-1)%MOD)*(a%MOD))%MOD;
//     }
// }
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if (c==0){
        cout<<'='<<endl;
    }
    else if (c%2==0){
        a = abs(a);
        b = abs(b);
        if (a>b){
            cout<<'>'<<endl;
        }
        else if (a==b){
            cout<<'='<<endl;
        }
        else{
            cout<<'<'<<endl;
        }

    }
    else{
        if (a>b){
            cout<<'>'<<endl;
        }
        else if (a==b){
            cout<<'='<<endl;
        }
        else{
            cout<<'<'<<endl;
        }
    }

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