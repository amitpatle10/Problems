/* 
The idea was to use Binary search in this 
search space would be between the lowest amount of pages that can be allocated to a single student and highest 
amount of pages that can be allocated to a single student 
Lowest would be the first element of the array 
Highest would be the sum of all the elements of the array 

Take a barrier as mid and check if the allocation is possible with this constraint 

If possible set high as mid - 1
If not set low as mid + 1

The idea was basically to cal a possible permutation setting a max number of pages allocated to 
a single student , this can be best done using binary search 



*/


class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool allocation(int mid ,int arr[], int n, int m ){
        int count = 1; 
        int sum = 0;
        for (int i = 0; i < n; i ++){
            if (arr[i] > mid)return false; 
            if (arr[i] + sum > mid){
                count ++;
                sum = arr[i];
                if (count > m)return false;
            }
            else {
                sum += arr[i];
            }
        }
        return true;
    }
    
    void binarysearch(int low, int high, int arr[],int n, int m, int &res){
        if (low > high)return ;
        int mid = (low + high)/2; 
        
        if (allocation(mid, arr, n, m)){
            res = mid; 
            high = mid - 1; 
        }
        else {
            low = mid + 1;
        }
        binarysearch(low, high, arr, n, m , res);
        
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int low = arr[0];
        int high = 0; 
        int res = -1 ; 
        for (int i = 0; i < n; i++){
            high += arr[i];
        }
        binarysearch(low, high, arr, n, m, res);
        return res;
        
    }
};