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

// A   A      B   B   B   B   A     A     B         B
//     p=p-b                  p=p-t       p=p-b     p = p-t
//     p<0
//            start


void solve(){
    int b,t,p;
    cin>>b>>t>>p;
    string s;
    cin>>s;
    int n = s.size();
    char c = 'Z';
    int i;
    for (i=s.size()-2;i>=0;i--){
        if (c!=s[i]){
            c = s[i];
            if (s[i]=='A'){
                p -= b;
            }
            else{
                p -= t;
            }

        }
        if (p<0){
            break;
        }
    }
    cout<<i+2<<endl;


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