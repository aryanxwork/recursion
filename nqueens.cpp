#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool issafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    // check horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }
    // check vertical
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }
    // check left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    // check right diagonal
    for (int i = row, j = col; i >= 0; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}
void solveNQueens(vector<vector<char>> board, int row, int &count)
{
    int n = board.size();
    if (row == n)
    {
        count++;
        print(board);
        return;
    }
    for (int j = 0; j < n; j++)
    {

        if (issafe(board, row, j) == true)
        {
            board[row][j] = 'Q';
            solveNQueens(board, row + 1, count);
            board[row][j] = '.';
        }
    }
}

int main()
{
    vector<vector<char>> board;
    int n = 4;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        for (int j = 0; j < n; j++)
        {
            row.push_back('.');
        }
        board.push_back(row);
    }
    solveNQueens(board, 0, count);
    cout << count << endl;
    return 0;
}