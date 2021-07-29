



class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        if (n==1){
            return 0;
        }
        if (n==2){
            return 1; 
        }
        long long a = 0;
        long long b = 1;
        long long ans = 1;
        
        for (int i=3;i<=n+1;i++){
            ans = (a%1000000007+b%1000000007)%1000000007;
            a = b;
            b = ans;
        }
        return ans%1000000007;
    }
};
