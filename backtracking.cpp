#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void backtrack(int arr[], int n, int i)
{
    if (i == n)
    {
        print(arr, n);
        return;
    }
    {
        arr[i] = i + 1;
        backtrack(arr, n, i + 1);
        arr[i] -= 2;
    }
}
int main()
{
    int arr[] = {0, 0, 0, 0, 0};
    backtrack(arr, 5, 0);
    print(arr, 5);
    return 0;
}