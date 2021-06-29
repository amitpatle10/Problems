
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

/*

Here we have maintained a steps varible which when becomes zero we ask the max reach variable hey can 
reach more steps ahead 

If yes we update steps as max_reach - i

At every steps becoming zero we update ans as ans++



*/

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int steps = v[0];
    int max_reach  = v[0];
    if (steps==0){
        cout<<-1<<endl;
        return;
    }
    int ans  = 1;
    for (int i=1;i<n-1;i++){
        steps--;
        max_reach = max(max_reach,v[i]+i);
        if (steps==0){
            
            steps = max_reach - i;

            if (steps<=0){
                cout<<-1<<endl;
                return;
            }
            ans ++ ;

        }
    }
    cout<<ans<<endl;
    return;

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