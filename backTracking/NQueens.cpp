#include <iostream>
#include <vector>
using namespace std ;
bool canPlaceQueen(int row, int col,vector<vector<char>> &grid){
    //  is someone attacking from vertical 
    for(int i= row-1;i>=0;i-- ){
            if (grid[i][col]== 'Q') return false;

    }
    //  diagonal checking left
    for(int i= row-1, j= col-1;i>=0 && j>=0;i--,j--) {
         if (grid[i][j]== 'Q') return false;
    }
    //  diagonal checking right
    for(int i= row-1, j= col+1;i>=0 && j< grid.size() ;i--,j++) {
         if (grid[i][j]== 'Q') return false;
    }
    return true;
}
void nQueen (vector<vector<char>>&grid, int currRow, int n ){
    if(currRow == n){
            for(int i =0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            return;
    }
    for(int col =0;col<n;col++){
        // we will go to all the colllumns
        //  let us check if we can place a queen at current and col
        if(canPlaceQueen(currRow, col, grid)){
            grid[currRow][col] = 'Q';
            nQueen(grid,currRow+1, n);
            grid[currRow][col] = '.';
        }
    }
}
int main() {
    int n=4;
    vector<vector<char>> grid(n, vector<char>(n,'.'));
    nQueen(grid,0,n );
    return 0;
}