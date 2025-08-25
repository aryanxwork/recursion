#include <iostream>
using namespace std;

int grid(int row, int col, int m, int n)
{
    if (row == m - 1 && col == n - 1)
    {
        return 1;
    }
    if (row >= m || col >= n)
    {
        return 0;
    }
    return grid(row + 1, col, m, n) + grid(row, col + 1, m, n);
}
int main()
{
    int m = 3, n = 3;
    cout << grid(0, 0, m, n) << endl;
    return 0;
}