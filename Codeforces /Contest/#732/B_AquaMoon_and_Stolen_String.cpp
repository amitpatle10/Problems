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
    int n,m;
    cin >> n >> m;
    vector<string>v(n);
    vector<string>found(n-1);
    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    for (int i = 0;i < n-1 ; i++ ){
        cin >> found[i];
    }

    string ans = "";
    for (int i = 0; i < m ; i++){
        unordered_map<char,int> check;
        for (int j = 0;j < n; j++){
            char temp = v[j][i];
            check[temp]++;
        }
        for (int j = 0;j<n-1;j++){
            char temp = found [j][i];
            check[temp]++;        
        }
        for (auto x: check){
            if (x.second%2!=0){
                ans += x.first;
            }
        }
        check.clear();
    }
    cout<< ans << endl;
    fflush(stdout);



    


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