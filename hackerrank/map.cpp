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
    int t, n;
    string s, q;
    cin >> t;
    map<string, int> m;
    while (t--)
    {
        cin >> q;
        if (stoi(q))
            cout << stoi(q) << endl;
        else
        {
            cout << "no" << endl;
        }
    }
    cout << endl;
    return 0;
}