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
    string s, t;
    int n, p = -1;
    cin >> s >> t >> n;

    for (int i = 0; i < max(s.length(), t.length()); i++)
    {
        if (s[i] != t[i])
        {
            p = i;
            break;
        }
    }
    if (p == -1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        int s1 = s.length() - p;
        int t1 = t.length() - p;
        if (s1 + t1 == n)
            cout << "yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}