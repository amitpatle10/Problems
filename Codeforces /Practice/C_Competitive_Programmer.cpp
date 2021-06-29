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



void solve(){
    string n;
    cin>>n;
    int check_zero = 0;
    int check_two = 0;
    
    int sum = 0;
    if (n == "0"){
        cout<<"red"<<endl;
    }
    for (int i=0;i<n.size();i++){
        if (n[i]=='0' && !check_zero){
            check_zero = 1;
            continue;
        }
        if ((n[i]-'0')%2==0){
            check_two = 1;
        }
        sum += n[i] - '0';
    }
    if (sum % 3 ==0){
        if (check_two && check_zero){
            cout<<"red"<<endl;
            return;
        }
    }
    cout<<"cyan"<<endl;
    return;


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