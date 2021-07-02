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
    let's suppose the sequence is 
    a b c d e f 
    and it is sorted 
    now id c and d have the min difference 
    then the optimal way by obervation will be
    d e f a b c
    we will get the min |h1 - hn|
    and difficulty wil be n-2 if numbers are not same or less
    but will be max off course 
    
*/

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    if (n==2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
        return;
    }
    int a = arr[0];
    int b = arr[1];
    map<int,int>check;
    int id1 = 1;
    int id2 = 0;
    for (int i=2;i<n;i++){
        if (arr[i]-arr[i-1]<=(b-a)){
            b = arr[i];
            a = arr[i-1];
            id1  = i;
            id2 = i-1;
        }  
        
    }
    
    
    for(int i=id1;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    for (int i=0;i<=id2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    

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