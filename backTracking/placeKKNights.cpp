/*
problem 5

Place K- Knight such that they do not attack each other

Given integer M,N and K, the task is to place K knights on M*N chessboard such that they are not attack each other 
the knights are expected to be placed on different squares on the board. 
A knight can move two square verticaly and one horizontaly or two sqaure horizontaly and one 
square veritcaly . the knight attckes each others if one of them can reach other in single move.

there is multiple way to placing K knights on M*N board or sometimes. NO way of placing them 

we are expected to list out all the possible solutions.abort
input : M=3, N=3 , K=5
Output : 2

*/

#include <iostream>
#include<vector>
using namespace std ;
bool canPlace (vector<vector<char>>& grid , int i, int j){
        //    chexking attack
        if(i-1 >= 0 && j-2 >=0 && grid[i-1][j-2] == 'K') return false;
        if(i-1 >= 0 && j+2 >=0 && grid[i-1][j+2] == 'K') return false;
        if(i-2 >= 0 && j-1 >=0 && grid[i-2][j-1] == 'K') return false;
        if(i-2 >= 0 && j+1 >=0 && grid[i-2][j+1] == 'K') return false;
     return true;
}
void knight (vector<vector<char>>& grid , int m, int n, int k, int i, int j){
    //   all knight is placed
      if(k==0){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return ;
      }
    // if knight reach the out of grid square as collums
    if(j == n){
            knight(grid, m,n, k, i+1,0);
            return ;
    }
    // 
    if (i>= m){
          return;
    }
    for(int row = i;row <m; row++){
        for(int col = (row == i)?j :0; col< n; col++){
                if(canPlace (grid, row ,col)){
                grid[row][col]= 'K';
                knight(grid, m,n,k-1,row,col+1);
                grid[row][col] = '.';
    }
        }
    }
    
}
int main() {
    int n=3, m=3, k=5;
    vector<vector<char>> grid (m, vector<char>(n,'.'));
        knight (grid, m,n,k,0,0);
        return 0;
}