#include <iostream>
using namespace std;

void permutations(string str, string ans)
{
    if (str.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        string remaining = str.substr(0, i) + str.substr(i + 1, str.size() - i - 1);
        permutations(remaining, ans + ch);
    }
}
int main()
{
    string str = "abc";
    permutations(str, "");
    return 0;
}