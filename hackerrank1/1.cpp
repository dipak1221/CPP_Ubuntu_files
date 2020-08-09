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
    ll n;
    int flag = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (a[0] & 1)
    {
        for (ll i = 1; i < n; i++)
        {
            if ((a[i] % 2 == 0) && (i & 1))
            {
                flag = 0;
            }
            else if ((a[i] & 1) && (i % 2 == 0))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if ((a[i] % 2 == 0) && (i % 2 == 0))
            {
                flag = 0;
            }
            else if ((a[i] & 1) && (i & 1))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    // cout << endl;
    return 0;
}