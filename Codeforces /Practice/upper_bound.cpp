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

// upper bound return first element
// strictly greater than the given element

// syntax same as lower_bound

// if element is not found it returns v.end()

// Time complexity is O(logn) since it uses binary Search

// To check if the given element
// is present or not
// we can use upper bound 
// if (it != v.begin()  &&  *(it-1) == element){cout<<"Found"}

// we can use upper bound and lower bound for map set or say any
// container irrespective of having random access or not 

void solve(){
    vector<int>v{1,2,10,10,10,30,40};
    cout<<upper_bound(v.begin(),v.end(),10)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),11)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),100)-v.begin()<<endl;
    auto it = upper_bound(v.begin(),v.end(),10);
    if (it != v.begin()  &&  *(it-1) == 10){
        cout<<"Found at "<<it-1-v.begin()<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

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