/* 

Basically in this problem we made a array which will store the sum of respective partions 
If the count reaches the required partitions we return true 



*/

class Solution{
  public:
    int subsets[100];
    bool solve (int a[],int n, int req, int i, vector<bool>visit, int k){
        if (i == k  ){
            
            return true; 
        }
        if (subsets[i] == req){
            // if we reach a required sum for a partition we then check for next partition
            return solve(a, n, req, ++i,visit, k );
        }
        
        for (int j = 0; j < n; j ++){
            if (visit[j]==false){
                // we put elements in the partition and check if it is possible to reach a required sum 
                if (subsets[i] + a[j] <= req){
                    subsets[i] += a[j];
                    visit[j] = true;
                    bool possible = solve(a, n, req, i, visit, k);
                    subsets[i] -= a[j];
                    visit[j] = false;
                    if (possible)return true;
                }
            }
        }
        return false;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         if (k == 1)return true;
         if (n < k)return false;
         int sum = 0; 
         for (int i = 0; i < n ; i ++){
             sum += a[i];
         }
         if (sum%k != 0)return false; 
         int req = sum/k;
         memset(subsets, 0, sizeof(subsets));
         vector<bool>visit(n, false);
         return solve(a, n, req, 0, visit, k);
         
    }
};