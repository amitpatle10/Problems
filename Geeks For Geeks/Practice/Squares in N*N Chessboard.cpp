/*

Number of sqaures in N*N chessboard is N*N + (N-1)*(N-1) + (N-2)*(N-2) + ......

*/


class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        if (N == 1){
            return 1;
        }
        // code here
        return squaresInChessBoard(N - 1) + N*N; 
    }
};