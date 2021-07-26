/*
We just need to check from a index the word we are grabbing is presnet in dict or not 
collectively if the ans is true return true else false
*/


class Solution
{
public:
    bool func(string s, vector<string>check){
        for (auto x: check){
            if (x == s){
                return true;
            }
        }
        return false;
    }
    bool solve(int i, string s, vector<string>check){
        if (i >= s.size())return true;
        for (int l = 1;l <= s.size(); l++){
            string temp = s.substr(i,l);
            if (func(temp,check) && solve(i + l, s, check)){
                return true;
            }
        }
        
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        
        bool ans = solve(0, A, B);
        return ans;
        
    }
};