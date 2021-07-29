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

int prime[10000001];
int n ;

int get_number(string s){
    int num = 0;
    int p = 0;
    for (int i = s.size()-1; i >= 0; i--){
        num += (s[i] - '0')*(1<<p);
        p++;
    }
    return num;
}
bool isprime(string s){
    
    for (int i = 2; i <= 1000; i++){
        for (int j = 2; j*i <= 1000; j++){
            prime[i*j] = false;
        }
    }
    int on_check = get_number(s);
    return prime[on_check];

}
vector<string>v;
void sub(string input, string output)
{
    
    if (input.empty()) {
        v.push_back(output);
        return;
    }

    //we need to make two choices whether to add the char or not 

    sub(input.substr(1), output + input[0]);    
    sub(input.substr(1), output);

}

void solve(){
    string s; 
    cin >> s; 
    sub(s,"");
    memset(prime,true,sizeof(prime));
    n = get_number(s);
    int ans = 0;
    for (auto x: v){
        if (isprime(x)){
            ans = max(ans, get_number(x));
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