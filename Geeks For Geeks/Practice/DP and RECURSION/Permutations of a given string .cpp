/* 

The idea is to take a element and swap it with every element ahead of it and then call function for next element 

*/


class Solution

{
	public:
	    void func(string s,vector<string>&ans,int x){
	        if (x==s.size()){
	            return;
	        }
	        for (int i=x;i<s.size();i++){
	            for (int j=i+1;j<s.size();j++){
	                string p = s;
	                swap(p[i],p[j]);
	                ans.push_back(p);
	                func(p,ans,x+1);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    func(S,ans,0);
		    
		    if (find(ans.begin(),ans.end(),S)==ans.end()){
		        ans.push_back(S);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
