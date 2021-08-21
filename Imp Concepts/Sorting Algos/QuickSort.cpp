#include <iostream>
#include <vector>
using namespace std; 

/*

Time Complexity:  
Auxiliary Space: 
Sorting In Place: 
Stable: 

*/

int partition(vector<int>& v, int low, int high){
    int pivot = low; 
    while (low < high){
        do {
            low++;
        }while(v[low] >= v[pivot]); 

        do {
            high--;
        }while(v[high] <= v[pivot]);

        swap(v[low], v[high]);
    }
    swap(v[pivot], v[high]); 
    return high; 
}

void quicksort(vector <int> v, int low, int high){
    if (low >= high)return; 

    int part = partition(v, low, high); 

    quicksort(v, low, part); 
    quicksort(v, part + 1, high); 

}

int main(){
    int n ; 
    cin >> n ; 
    vector <int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];

    quicksort(v, 0, n - 1);

    for (int i = 0; i < n; i++)cout << v[i] << " "; 
    cout << endl;  

}