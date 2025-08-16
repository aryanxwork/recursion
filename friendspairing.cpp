#include <iostream>
using namespace std;

int friendspairing(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int single = friendspairing(n - 1);
    int pair = (n - 1) * friendspairing(n - 2);
    return single + pair;
}
int main()
{
    cout << friendspairing(5) << endl; // Example input
    return 0;
}