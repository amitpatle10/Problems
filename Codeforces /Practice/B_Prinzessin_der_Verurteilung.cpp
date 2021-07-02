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

According to the piegon hole principle 
there will be ans of at max 3 size

so now we need to generate all possilble 
checks
we used queue 

*/

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int count  = 1;
    queue<string>q;
    q.push("");
    while(q.size()){  
        string check  = q.front();
        q.pop();
        if (check!="" && s.find(check) == -1){
            cout<<check<<endl;
            return;
        }
        for (char i='a';i<='z';i++){
            q.push(check + i);
        }

        
        
    }
        
    

};

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