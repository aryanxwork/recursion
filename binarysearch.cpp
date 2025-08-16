#include <iostream>
using namespace std;

int binarysearch(int arr[], int si, int ei, int key)
{
    int mid = (si + ei) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, ei, key);
    }
    return binarysearch(arr, si, mid - 1, key);
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int result = binarysearch(arr, 0, n - 1, key);
    if (result != -1)
    {
        cout << "Element found at index " << result;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}