#include <iostream>
using namespace std;

void occurences(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return;
    }
    if (arr[i] == key)
    {
        cout << "Element found at index " << i << endl;
    }
    occurences(arr, n, i + 1, key);
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    occurences(arr, n, 0, key);
    return 0;
}