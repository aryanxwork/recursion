#include <iostream>
using namespace std;

int firstoccurence(int arr[], int target, int i, int n)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == target)
    {
        return i;
    }
    return firstoccurence(arr, target, i + 1, n);
}
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4};
    int target = 4;
    cout << firstoccurence(arr, target, 0, 9);
}