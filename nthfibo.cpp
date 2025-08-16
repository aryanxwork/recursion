#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int res = fibonacci(n - 1) + fibonacci(n - 2);
    return res;
}
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    cout << "required fibonacci number is " << fibonacci(n) << endl;
}