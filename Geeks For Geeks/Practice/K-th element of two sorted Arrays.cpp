/*

Basically we can just traverse the two arrays using two pointers each traversing the respective
array and maintain a position 
As soon as the pos become equal to the req pos return the pointer pointer to that element 


take care of the condition if one array ends and still we are not on req pos 
we again have to check both the arrays 


*/


class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int pos = 0; 
        int l = 0 ;
        int r = 0 ;
        
        while(l<n && r<m){
            
            if (arr1[l] < arr2[r]){
                pos++;
                if (pos==k){
                    return arr1[l];
                }
                
                ++l;
            }
            else{
                pos++;
                if (pos==k){
                    return arr2[r];
                }
                
                ++r;
            }
            
            
            
            
        }
        while(l<n){
            pos++;
            if (pos==k){
                return arr1[l];
            }
            
            ++l;
            
        }
        while(r<m){
            pos++;
            if (pos==k){
                return arr2[r];
            }
            
            ++r;
            
        }
        
    }
};
