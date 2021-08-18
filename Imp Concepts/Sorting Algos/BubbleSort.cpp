#include <iostream>
#include <vector>
using namespace std; 


// time complexity - O(n^2)
// space complexity - O(1)
// Sorting In Place: Yes
// Stable: Yes



int main(){

    int n ; 
    cin >> n; 
    vector <int> v(n); 

    for (int i = 0; i < n; i++)cin >> v[i]; 

    for (int i = 0; i < n; i++){
        bool swapped = false; 
        for (int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j+1]){
                swapped = true; 
                swap(v[j], v[j+1]);
            }
        }
        if(!swapped)break; 
    }

    for (auto x : v)cout << x << " ";
    cout << endl; 

}