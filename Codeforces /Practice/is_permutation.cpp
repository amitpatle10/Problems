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

// is permutation checks if the  containers
// are permutation of each other 

// Time Complexity is O(n^2)
// useful for very big containers

void solve(){
    vector<int>v1{1,2,3};
    vector<int>v2{1,2,3,4};
    

    // checks whole of both the arrays
    // returns 0
    cout<< is_permutation(v1.begin(),v1.end(),v2.begin(),v2.end()) <<endl; 


    // checks from v2.begin()
    // returns 1
    cout<< is_permutation(v1.begin(),v1.end(),v2.begin()) <<endl; 

    

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