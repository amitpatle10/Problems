#include <iostream>
#include <vector>
using namespace std; 

/*

Time Complexity: O(nlogn)
Auxiliary Space: O(n)
Algorithmic Paradigm: Divide and Conquer
Sorting In Place: No in a typical implementation
Stable: Yes

*/

void merge(vector <int> &v, int low, int mid, int high){

    vector <int> temp(high - low + 1);  // temp array to store the elements which will be sorted

    int pos = 0; 
    int i = low; 
    int j = mid + 1; 

    while (i <= mid && j <= high){
        if (v[i] < v[j]){
            temp[pos] = v[i];
            pos++;
            i++;            
        }
        else {
            temp[pos] = v[j];
            pos++;
            j++;            
        }
    }

    // adding elements left in the first interval
    while(i <= mid) {
		temp[pos] = v[i];
		pos++;
        i++;
	}

	// adding elements left in the second interval 
	while(j <= high) {
		temp[pos] = v[j];
		pos++; 
        j++;
	}

    for (int x = low; x <=high; x++){
        v[x] = temp[x - low];     // x - low is neccessary low is our base 
    }
}

void mergesort(vector <int> &v, int low, int high){
    if (low >= high)return; 

    int mid = (low + high)/2; // partion the array into 2 parts 

    mergesort(v, low, mid); // calling merge sort for 1st part 
    mergesort(v, mid + 1, high); // calling merge sort for 2nd part

    merge(v, low , mid, high);  // merging the two sorted parts 

    
}

int main(){
    int n ; 
    cin >> n ; 
    vector <int> v(n); 
    for (int i = 0; i < n; i++)cin >> v[i]; 
    
    mergesort(v,0,n-1);

    for (auto x: v)cout << x << " "; 
    cout << endl; 
}