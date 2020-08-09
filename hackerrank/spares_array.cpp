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

    vector<string> s;
    // = {"abc", "ab", "abc", "hh"};
    vector<string> r;
    // = {"ab", "abc"};
    int n, t;
    string ss;
    cin >> n;
    while (n--)
    {

        cin >> ss;
        s.push_back(ss);
    }
    cin >> t;
    while (t--)
    {
        cin >> ss;
        r.push_back(ss);
    }

    for (int i = 0; i < r.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (r[i] == s[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    cout << endl;
    return 0;
}