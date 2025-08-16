#include <iostream>
#include <string>
using namespace std;

void binarystrings(int n, int lastplace, string ans)
{
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }

    if (lastplace != 1)
    {
        binarystrings(n - 1, 0, ans + '0');
        binarystrings(n - 1, 1, ans + '1');
    }
    else
    {
        binarystrings(n - 1, 0, ans + '0');
    }
}
int main()
{
    binarystrings(2, 0, "");
    return 0;
}
