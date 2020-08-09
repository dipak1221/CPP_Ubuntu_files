#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, s;
        cin >> n >> m >> s;
        ll pos = m % n;
        if (pos == 1)
        {
            cout << s << endl;
        }
        else if (pos == 0)
        {
            cout << s - 1 << endl;
        }
        else if (pos + s - 1 <= n)
        {
            cout << pos + s - 1 << endl;
        }
        else
        {
            pos = n - pos;
            pos = s - 1 - pos;
            cout << pos << endl;
        }
        // cout << endl;
    }
    // else{
    // pos+=s-1;
    // return pos%(n);
    // }

    return 0;
}