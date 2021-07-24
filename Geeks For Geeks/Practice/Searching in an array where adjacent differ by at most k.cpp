/*
 We are given a array whose adj element differes by exactly k 
 k==1
 4 5 4 5 6 7 

 Now we need to search x in the given array 
 we can normally search it but we can optimise it 


 we can make a jump of (arr[i] - x)/k 

                        110   -----

                90    -----
                
        70    -----
    
  50  ------

If we are at 50 and we are searching for 110
The diff will be 110 - 50 == 60 
we can make a jump of 60/k == 60/20 == 3


*/


int search(int arr[], int n, int x, int k)
{
    // Traverse the given array starting from
    // leftmost element
    int i = 0;
    while (i < n)
    {
        // If x is found at index i
        if (arr[i] == x)
            return i;
 
        // Jump the difference between current
        // array element and x divided by k
        // We use max here to make sure that i
        // moves at-least one step ahead.
        i = i + max(1, abs(arr[i]-x)/k);
    }
 
    cout << "number is not present!";
    return -1;
}