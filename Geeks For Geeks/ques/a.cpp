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
    
    string s ; 
    cin >> s ; 
    int m,n; 
    cin >> m >> n ; 
    int sz = s.size();
    int count = 1; 
    string temp = s; 
    reverse(s.begin(), s.begin()+ sz - 1);
    reverse(s.begin(), s.end());
    
    while (temp!=s){
        reverse(s.begin(), s.begin()+ sz - 1);
        reverse(s.begin(), s.end());   
          
        count ++; 
    }
    
    for (int k = 1; k < 1000; k++){
        
        if (( k*count % (m+n) )==0){
            cout << (k*count)/(m+n)  *  2<< endl; 
            break;
        }
        else if ((k*count - m)%(m+n)==0 ){
            cout << (k*count - m)/(m+n) * 2<< endl;
            break;
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