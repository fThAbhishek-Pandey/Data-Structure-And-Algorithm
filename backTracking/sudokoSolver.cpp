#include <iostream>
#include <vector>
using namespace std;
bool canPlace(vector<vector<char>> &board, int row, int col, char num)
{
     cout<<"i am called :";
    //    check in col the num is already in or not
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == num)
            return false;
    }
    //    check in row the element
    for (int i = 0; i < 9; i++)
    {
        if (board[row][i] == num)
            return false;
    }
    //  check in subgrid
    for (int i = (row / 3) * 3; i < (row / 3) * 3 + 3; i++)
    {
        for (int j = (col / 3) * 3; j < (col / 3) * 3 + 3; j++)
        {
            if (board[i][j] == num)
                return false;
        }
    }
    return true;
}
bool sudoku(vector<vector<char>> &board, int row, int col)
{
    //  base case
    if (col >= 9)
        return sudoku(board, row + 1, 0);
    if (row >= 9)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    if (board[row][col] == '.')
    {
        for (int num = 1; num <= 9; num++)
        {
            if (canPlace(board, row, col, '0' + num))
            {
                board[row][col] = '0' + num;
                bool res = sudoku(board, row, col + 1);
                if (res)
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    else
    {
        return sudoku(board, row, col + 1);
    }
}
void solveSudoku(vector<vector<char>> &board)
{
    bool res = sudoku(board, 0, 0);
    //    for(int i=0;i<9;i++){
    //     for(int j=0; j<9; j++){
    //         cout<<board[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return;
}
int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '8', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '.', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    solveSudoku(board);
    return 0;
}