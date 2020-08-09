#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input1.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    char *str, *pattern, *temp;
    while (t--)
    {
        cin >> str >> pattern;
        temp = pattern;

        string res = "";
        sort(str.begin(), str.end());
        sort(temp.begin(), temp.end());
        // cout << s;
        int i = 0, j = 0, flag = 0;
        // cout << s << "---" << endl;
        while (i < strlen(str) && j < strlen(temp))
        {
            if (str[i] == temp[j])
            {
                j++;
            }
            else
            {
                if ((pattern[0] < str[i]) && flag == 0)
                {
                    res += pattern;
                    flag = 1;
                }
                res += str[i];
            }
            if (j == strlen(temp))
            {
                i++;
                break;
            }

            i++;
        }
        while (i < str.size())
        {
            if ((pattern[0] < str[i]) && flag == 0)
            {
                res += pattern;
                flag = 1;
            }
            res += str[i];
            i++;
        }
        cout << res << endl;
    }

    return 0;
}