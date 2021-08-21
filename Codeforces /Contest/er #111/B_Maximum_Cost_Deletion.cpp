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
    
    int n;
    cin >> n;
    int a , b ;
    cin >> a >> b;
    string s;
    cin >> s;    
    
    
    int count  = 0;
    int one  = 0;
    int zero  = 0;
    for (int i=0;i<n;i++){
        if (s[i]=='1'){
            int j = i+1;
            
            while(s[j]==s[i]){
                j++;
            }
            i = j-1;
            one ++;
        }
        else {
            int j = i+1;
            
            while(s[j]==s[i]){
                j++;
            }
            i = j-1;
            zero ++;
        }
    }
    

    
    
    if (b>=0){
        cout<<a*n + b*(n)<<endl;

    }
    else {
        cout<<a*n + b*(min(zero,one)+1)<<endl;
    }
   
    
    

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}