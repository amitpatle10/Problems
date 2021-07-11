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
    string s;
    cin>>s;
    int n = s.size();
    int pos = -1;
    for (int i=0;i<n;i++){
        if (s[i]=='a'){
            pos = i;
            break;
        }
    }
    if (pos == -1){
        cout<<"NO"<<endl;
        return;
    }
    // int count = 0;
    // unordered_map<char,int>check;
    int a = pos;
    int b = pos+1;
    for (char i = 'a'  ; i < char('a'+ n ) ;i++){
        
        auto it  = s.find(i);
        if (it == string::npos){
            cout<<"NO"<<endl;
            return;
        }
        else {
            int p  = it ;
            // deb(i);
            // deb3(it,a,b);
            
            if (p == a){
                a--;
            }
            else if (p == b){
                b++;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;


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