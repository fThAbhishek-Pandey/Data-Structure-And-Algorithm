/*
consider an N*N chessboard. The knight tours problem is to print order when the knight visits 
thats block of the chessboards. 
--> The rule is that the knight visits each block exactly once. 
*/


#include <iostream>
#include<vector>
using namespace std ;
bool f(vector<vector<int>> & grid , int i, int j , int  n, int count){
      if(i<0 || j<0 || i>=n || j>=n || grid[i][j]>=0){
         return false;
      }
    // if all square is fulfilled  
    if(count == n*n -1){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
     grid[i][j]= count;
   if ( f(grid, i-1, j-2,n, count+1) ) return true;
   if ( f(grid, i-2, j-1,n, count+1) ) return true;
   if ( f(grid, i+1, j-2,n, count+1) ) return true;
   if ( f(grid, i+2, j-1,n, count+1) ) return true;
   if ( f(grid, i+1, j+2,n, count+1) ) return true;
   if ( f(grid, i+2, j+1,n, count+1) ) return true;
   if ( f(grid, i-1, j+2,n, count+1) ) return true;
   if ( f(grid, i-2, j+1,n, count+1) ) return true;
   grid [i][j] = -1;
return false;
 } 
int main() {
   int n=6;
   vector<vector<int>> grid(n, vector<int> (n,-1));
   bool flag =   f(grid,0,0,n,0);
    if(!flag) cout<<"NO valid ans "<<endl;
    return 0;
}