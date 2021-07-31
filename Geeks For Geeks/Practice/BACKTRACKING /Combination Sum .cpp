/*

To delete duplicates in a array :    A.erase(unique(A.begin(),A.end()), A.end());

*/ 


class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(vector<int> A, int B, vector <int> temp, int sum, vector<vector<int>>&ans, int i){
        if (sum == B){
            ans.push_back(temp);
            return;
        }
        while( i < A.size() && sum + A[i] <= B){
            temp.push_back(A[i]);
            solve(A, B , temp, sum + A[i], ans, i);
            ++i;
            temp.pop_back();
        }
        return;
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int> > ans; 
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()), A.end());
        solve(A, B, {}, 0, ans, 0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};