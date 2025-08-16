#include <iostream>
using namespace std;

int tilling(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int verticalways = tilling(n - 1);
    int horizontalways = tilling(n - 2);
    int totalways = verticalways + horizontalways;
    return totalways;
}
int main()
{
    cout << tilling(8) << endl;
}