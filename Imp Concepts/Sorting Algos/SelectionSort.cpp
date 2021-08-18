#include <iostream>
#include <vector>
using namespace std; 

/*

Time Complexity: O(n2) as there are two nested loops.
Auxiliary Space: O(1) 

Not a stable implementation

The good thing about selection sort is it never makes more than O(n) swaps
and can be useful when memory write is a costly operation. 


*/

int main (){
    int n ; 
    cin >> n; 
    vector <int> v(n); 
    for (int i = 0; i < n; i++)cin >> v[i]; 
    
    for (int i = 0; i < n; i++){
        int min_element = v[i]; 
        int ind  = i; 
        for (int j = i+1; j < n; j++){
            if (min_element > v[j]){
                min_element = v[j];
                ind = j; 
            }
        }
        swap(v[i], v[ind]);
    }

    for (auto x : v)cout << x << " "; 
    cout << endl; 
}