class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>ans(V,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
        ans[S] = 0;
        pq.push({0,S});
        
        
        while(!pq.empty()){

            int dist = pq.top().first;
            int node = pq.top().second;
           
            pq.pop();
            
            for (int j = 0; j < adj[node].size(); j++){
                int p = adj[node][j][0];
                int d = adj[node][j][1];
                if (dist + d < ans[p]){
                    ans[p] = dist + d;
                    
                    pq.push({ans[p],p});
                    
                }
            }            
            
        }
        return ans;
        
    }
};