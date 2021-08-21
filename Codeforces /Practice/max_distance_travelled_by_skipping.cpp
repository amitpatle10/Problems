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
5
2 L
3 R
4 L
1 R
5 L
*/
int n;
vector < int > v;

// int dp(int i){
//     if ( i == n ){
//         return 0;
//     }
//     // taking 
    
//     int a = v[i]  +  dp(++i);

//     //not taking

//     int j = i;
//     int count  = 1;
//     if (v[i] < 0){
        
//     }


    
// }

void solve(){
    
    cin >> n;
    
    int count = 0;
    int sum = 0 ;
    for (int i=0;i<n;i++){
        int a ;
        char c;
        cin >> a >> c;
        
        if (c == 'L'){
            v.push_back(-a);
        }
        else {
            v.push_back(a);
        }
        sum += v[i];
    }
    int ans = 0;
    if (sum < 0 ){
        ans  = 0;
        for (int i=0;i<n;i++){
            int temp = v[i];
            int count_pos = 0;
            int count_neg = 0;
            if (v[i]<0){
                count_neg ++ ;
            }
            else {
                count_pos ++ ;
            }
            int j = i+1;
            while(count_neg!=count_pos && j<n){
                ++j;
                temp += v[j];
                if (v[j]<0)count_neg++;
                else count_pos++;
            }
            if (count_neg == count_pos && temp<0){
                ans += temp;
            }
            else{
                ans += v[i];
            }
            i = j-1;
            deb(ans);


        }
    }
    else{
        ans  = 0;
        for (int i=0;i<n;i++){
            int temp = v[i];
            int count_pos = 0;
            int count_neg = 0;
            if (v[i]<0){
                count_neg ++ ;
            }
            else {
                count_pos ++ ;
            }
            int j = i+1;
            while(count_neg!=count_pos && j<n){
                ++j;
                temp += v[j];
                if (v[j]<0)count_neg++;
                else count_pos++;
            }
            if (count_neg == count_pos && temp>0){
                ans += temp;
            }
            else{
                ans += v[i];
            }
            i = j-1;
            


        }
    }
    cout<< abs(ans) <<endl;
    
    
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