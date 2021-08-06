/*

The idea is to check the possible colors we can color a node 
color the node with that color and call the function for future node 
if it is possible we return true otherwise remove the color(Backtrack)
And check for other possible colors and repeat the same procedure 

*/



vector<int>g[100];
int color[100];
bool solve(int x, int V, int m){
    if (x == V)return true; 
    
    set<int>check; 
    
    for (auto node: g[x]){
        if (color[node]!=-1)check.insert(color[node]);
    }
    
    for (int i = 1; i <= m ; i++){
        if (check.find(i)==check.end()){
            color[x] = i; 
            if (solve(x+1, V, m)==true){
                return true;
            }
            color[x] = -1;
        }
    }
    return false;
    
}
bool graphColoring(bool graph[101][101], int m, int V)
{
    // your code here
    for (int i = 0; i < V; i ++){
        g[i].clear();
        color[i] = -1;
    }
    for (int i = 0; i < V; i ++){
        
        for (int j = 0; j < V; j++){
            if (graph[i][j]==1){
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    
    return solve(0, V, m);
    
    
}