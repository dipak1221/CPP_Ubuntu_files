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
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == '}')
            {
                if (st.size() >= 1 && st.top() == '{')
                {
                    // cout << "---" << endl;
                    st.pop();
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (st.size() >= 1 && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else if (s[i] == ')')
            {
                if (st.size() >= 1 && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1 && st.empty() == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // cout << endl;
    return 0;
}