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
Why we are subtracting 0.5 ?
lets consider two numbers a and b 
such that b-a = 1
now how can this two values intersect 
a + x = b - x
2x = b-a
x = (b-a)/2
x = 0.5 
so we add 0.5 to a and 
substract 0.5 from b 
This will correctly check if the given two 
values intersect or not
*/

void solve(){
    int n;
    int check;
    float a,b;
    cin>>n;
    vector<pair<float,float>>v;
    for (int i=0;i<n;i++){
        cin>>check>>a>>b;
        if (check==1){
            v.push_back(make_pair(a,b));
        }
        else if (check==2){
            v.push_back(make_pair(a,b-0.5));
        }
        else if (check==3){
            v.push_back(make_pair(a+0.5,b));
        }
        else {
            v.push_back(make_pair(a+0.5,b-0.5));
        }

    }
    
    
    int ans  = 0;
    for (int i=0;i<n;i++){
        
        for (int j=i+1;j<n;j++){
            pair<double,double> x = v[j];
            pair<double,double> y = v[i];
            if (max(x.first,y.first)<=min(x.second,y.second)){
                ans++;
            }
        }
        
        
    }
    cout<<ans<<endl;

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