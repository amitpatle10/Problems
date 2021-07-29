/* 

Take transpose of the matrix then reverse every column; 


*/



void rotate(vector<vector<int> >& matrix)
{
    
    // Need to swap every respective cycle; 
    
    int row = matrix.size(); 
    int col = matrix[0].size();
    
    int cycles = row/2; 
    for (int i = 0; i < row; i ++){
        for (int j = i; j < col; j ++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int j = 0; j < col; j++){
        int l = 0; 
        int r = row - 1 ; 
        while (l < r){
            swap(matrix[l][j],matrix[r][j]);
            l++;
            r--;
        }
    }
        

    
}