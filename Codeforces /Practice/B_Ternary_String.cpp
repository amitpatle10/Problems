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

// Approach 1 (correct solution)
// solution would look like abbbbb....c so what we did is found out the chuck of equal characters and 
// checked if the preceding char and proceeding char and the chunk all are different then calculated the 
// Ans

// Approch 2 (not accepted)
// example 12222133333332
// we made start and the end array and stored the number of char till the Ith position 



void solve(){
    string s;
    cin>>s;
    int ans  = INT_MAX;
    int n = s.size();
    for (int i=0;i<n;i++){
        int j = i;
        int count  = 0;
        while(s[j]==s[i]){
            count ++;
            ++j;

        }
        if(i-1>=0 && j<n && s[j]!=s[i-1] ){
            ans = min(ans,count+2);
        }
        i = j-1;
    }
    if(ans==INT_MAX){
        cout<<0<<endl;
        return;
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