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
    int k,a,b;
    cin>>k>>a>>b;
    int p[a];
    int q[b];
    for (int i=0;i<a;i++)cin>>p[i];
    for (int i=0;i<b;i++)cin>>q[i];
    vector<int>ans;
    int i = 0;
    int j = 0;
    while((i<a)&&(j<b)){
        if (p[i]==0){
            ans.push_back(p[i]);i++;
            ++k;
        }
        else if (q[j]==0){
            ans.push_back(q[j]);j++;
            ++k;
        }
        else if (min(p[i],q[j]) <= k){
            if (p[i]< q[j]){
                ans.push_back(p[i]);
                i++;
            }
            else {
                ans.push_back(q[j]);
                j++;
            }
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    if (i<a){
        for (int x = i;x<a;x++){
            if (p[x]==0){
                k++;
                ans.push_back(0);
            }
            else if (p[x]<=k){
                ans.push_back(p[x]);
            } 
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    else if (j<b){
        for (int x = j;x<b;x++){
            if (q[x]==0){
                k++;
                ans.push_back(0);
            }
            else if (q[x]<=k){
                ans.push_back(q[x]);
            } 
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    for (auto x:ans)cout<<x<<" ";
    cout<<endl;

   
    

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