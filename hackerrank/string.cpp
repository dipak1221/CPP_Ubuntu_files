#include <bits/stdc++.h>
using namespace std;
int comp(string a, string b, string s)
{
    if (a < b)
        return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    string s, q;
    cin >> s;
    int t, tt;
    cin >> t;
    tt = t;
    vector<string> v;
    while (t--)
    {
        cin >> q;
        v.push_back(q);
    }
    //sort(v.begin(), v.end(), comp);
    for (int i = 0; i < v.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[min] < s)
        }
    }
    for (auto e : v)
    {
        cout << e << endl;
    }
    // cout << endl;
    return 0;
}