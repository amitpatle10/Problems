bool isvalid(int arr[MAX][MAX],int a,int b,int n,int visited[MAX][MAX]){
    if ((a>=0)&&(a<n)&&(b>=0)&&(b<n)&&arr[a][b]==1&&visited[a][b]==false){
        return true;
    }
    else {
        return false;
    }
}
void path (int arr[MAX][MAX],int a,int b,int n,string s,int visited[MAX][MAX],vector<string>&ans){
    
    if ((a==n-1)&&(b==n-1)){
        ans.push_back(s);
    }
    visited[a][b] = true;
    //up
    if (isvalid(arr,a-1,b,n,visited)){
        s += 'U';
        path(arr,a-1,b,n,s,visited,ans);
        
        s.pop_back();
    }
    //down
    if (isvalid(arr,a+1,b,n,visited)){
        s+='D';
        
        path(arr,a+1,b,n,s,visited,ans);
        
        s.pop_back();
    }
    //left
    if (isvalid(arr,a,b-1,n,visited)){
        s+='L';
        
        path(arr,a,b-1,n,s,visited,ans);
        
        s.pop_back();
    }
    //right 
    if (isvalid(arr,a,b+1,n,visited)){
        s+='R';
        
        path(arr,a,b+1,n,s,visited,ans);
        
        s.pop_back();
    }
    visited[a][b] = false;
    
    
    
}
vector<string> findPath(int m[MAX][MAX], int n) {
    vector<string>ans;
    int visited[MAX][MAX];
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            visited[i][j] = false;
        }
    }
    string s;
    if (m[0][0]==0){
        return ans;
    }
    path(m,0,0,n,s,visited,ans);
    sort(ans.begin(),ans.end());
    
    return ans;
    
    
}
