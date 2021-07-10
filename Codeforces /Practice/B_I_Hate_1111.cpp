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

Since gcd(11,111)=1, by the Chicken McNugget Theorem, 
all numbers greater than 1099 can be written 
as a sum of 11 and 111. We can use brute force to 
find the answer to all values less than or equal to 1099 
and answer yes for all other numbers.

*/





void solve(){
    int n;
    cin>>n;
    if (n>1099){
        cout<<"YES"<<endl;
        return;
    }
    while(n>=0){
        if (n%11==0){
            cout<<"YES"<<endl;
            return;
        }
        n -= 111;
    }
    cout<<"NO"<<endl;

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