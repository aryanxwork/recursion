#include <iostream>
using namespace std;

void printsubsets(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << endl;
        return;
    }
    char ch = str[0];
    // yes case
    printsubsets(str.substr(1, str.size() - 1), subset + ch);
    // no case
    printsubsets(str.substr(1, str.size() - 1), subset);
}
int main()
{
    string str = "abc";
    printsubsets(str, "");
    return 0;
}