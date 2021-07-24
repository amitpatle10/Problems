/* 
 we can normally multiply ans store the values in a vector keeping track of carry 



*/



class Solution {
public:
    vector<int>ans;
    
    int multiply(int mul,int s){
        int carry = 0;
        for (int i = 0; i < s; i++){
            int prod = ans[i]*mul + carry;
            ans[i] = prod%10;
            carry = prod/10;
        }
        while(carry){
            int x = carry%10;
            ans.push_back(x);
            carry = carry/10;
        }
        return ans.size();
    }
    
    vector<int> factorial(int N){
        // code here
        if (N==0){
            return {1};
        }
        
        ans.push_back(1);
        int s = 1;
        for (int i=1; i <= N; i++){
            s = multiply(i,s);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
    
    
};
