#include <iostream>
#include <string>
using namespace std;

void removeduplicates(string s, string ans, int si, bool arr[26])
{
    if (si == s.size())
    {
        cout << "ans : " << ans << endl;
        return;
    }

    int mapindex = (int)(s[si] - 'a');
    if (arr[mapindex] == true)
    {
        removeduplicates(s, ans, si + 1, arr);
    }
    else
    {
        arr[mapindex] = true;
        removeduplicates(s, ans + s[si], si + 1, arr);
    }
}
int main()
{
    string s = "okayyyy";
    string ans = "";
    bool map[26] = {false};
    removeduplicates(s, ans, 0, map);
}