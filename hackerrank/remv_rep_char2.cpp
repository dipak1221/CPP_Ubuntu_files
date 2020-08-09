#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        char ch=']';
        for (long long int i = 0; i < s.size(); i++)
        {
            if (ch != s[i])
            {
                cout << s[i];
                ch = s[i];
            }
        }

        cout << endl;
    }

    return 0;
}