/*




*/


class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=0;
	    int j=0;
	    int k = n-1;
	    while(i<=k && j<m){
	        if (arr1[i]>arr2[j]){
	            swap(arr2[j++],arr1[k--]);
	        }
	        else {
	            i++;
	            
	        }
	       
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    
	    
	}
};