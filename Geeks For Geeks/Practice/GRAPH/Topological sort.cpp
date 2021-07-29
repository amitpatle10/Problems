/* 
Just we need to keep a stack in normal dfs ans store elements in the stack according to how
dfs proceeds 
*/


class Solution
{
	public:
	
	
	bool visited[10001];
	
	void dfs(int x,stack<int> &s,vector<int>adj[]){
	    if (visited[x]==true){
	        return;
	    }
	    visited[x]=true;
	    for (auto a:adj[x]){
	        if (visited[a]==false){
	            dfs(a,s,adj);
	        }
	    }
	    s.push(x);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    
	    
	    memset(visited,false,sizeof(visited));
	    stack<int>s;
	    for (int i=0;i<V;i++){
	        if (visited[i]==false){
	            dfs(i,s,adj);
	        }
	    }
	    vector<int>ans;
	    while(s.size()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	    
	    
	}
};