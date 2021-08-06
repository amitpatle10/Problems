int visited[100001];
bool dfs(vector<int>adj[],int x){   

    visited[x]=1;
    int ans = true;
    for(auto i: adj[x]){
        if (visited[i]==0){
            ans = ans && dfs(adj, i);
        }
        else if (visited[i]==1)visited[i] = 2;
        else {
            return false;
        }
        
    }
    return ans;
}
bool isCycle(int V, vector<int>adj[])
{
    
    memset(visited, 0 , sizeof(visited));
    for(int i=0;i<V;i++){
        if (visited[i]==0){
            if (dfs(adj, i)){
                return true;
            }
        }
    }
    return false;
    
}