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
    int a[n];
    int b[n];
    int s1 = 0;
    int s2 = 0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        s1 += a[i];
    } 
    for (int i=0;i<n;i++){
        cin>>b[i];
        s2 += b[i];
    } 
    vector<vector<int>>ans;
    if (s1 == s2 ){
        for (int i=0;i<n;i++){
            if (a[i]==b[i])continue;
            int inc = 0;
            int dec  = 0;

            if (a[i]>b[i]){
                
                inc = a[i] - b[i];
            }
            else {
                dec  = b[i] - a[i];
            }
            for (int j = i+1;j<n;j++){
                if(inc){
                    if (a[j]<b[j]){
                        a[j]++;
                        inc--;
                        ans.push_back({i+1,j+1});
                        j--;
                        
                    }
                }
                else if (dec){
                    if (a[j]>b[j]){
                        a[j]--;
                        dec--;
                        ans.push_back({j+1,i+1});
                        j--;
                        
                    } 
                }
                else {
                    break;
                }
                
            }
        }
        cout<<ans.size()<<endl;
        for (auto x:ans){
            cout<<x[0]<<" "<<x[1]<<endl;
        }
    }
    else {
        cout<<-1<<endl;
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