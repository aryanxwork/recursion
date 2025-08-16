#include <iostream>
using namespace std;

void towerofhanoi(int n, char s, char h, char d)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << s << " to " << d << endl;
        return;
    }
    towerofhanoi(n - 1, s, d, h);
    cout << "Move disk " << n << " from " << s << " to " << d << endl;
    towerofhanoi(n - 1, h, s, d);
}
int main()
{
    int n = 3;                      // Number of disks
    towerofhanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}