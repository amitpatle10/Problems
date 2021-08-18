#include <iostream>
#include <vector>
using namespace std; 

/*

Time Complexity: O(n^2) 
Auxiliary Space: O(1)
Sorting In Place: Yes
Stable: Yes

Can be optimised using binary search to search the correct place of the element


*/

int main(){
    int n ; 
    cin >> n; 
    vector <int> v(n); 
    for (int i = 0; i < n; i++)cin >> v[i]; 

    for (int i = 0; i < n; i++){
        int j = i - 1; 
        int key = v[i];
        while (j >= 0 && key<v[j]){
             
            v[j+1] = v[j];
            j--;

        }
        v[j+1] = key; 
    }


    for (auto x : v)cout << x << " "; 
    cout << endl; 
}