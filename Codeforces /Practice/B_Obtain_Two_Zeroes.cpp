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

//    1 2
//    3 3
//    4 5
//    5 7

// so one observation we can see is sum at every stage % 3 = 0

// but now 1 8 can also be valid 
// but its not the correct case so one more 
// condition to put on is acc to x 2x is
// a*2 >= b because lets take the worst 
// case scenario a and b we substract a with a and b with 2*a
// but here if b is still positive then ans 
// is no hence we check if a*2 is greater or not than b 
//.....it should be greater for correct ans........


void solve(){
    int a,b;
    cin>>a>>b;
    int t = a;
    a = min(a,b);
    b = max(t,b);
    if ((a+b)%3==0 && a*2 >= b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


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