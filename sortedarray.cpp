#include <iostream>
using namespace std;

bool issorted(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return issorted(arr, n, i + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {1, 2, 4, 5, 3};
    cout << issorted(arr, 5, 0) << endl;
    cout << issorted(brr, 5, 0);
}