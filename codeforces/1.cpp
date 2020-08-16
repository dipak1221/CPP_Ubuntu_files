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
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        long double sum = ((a[0] + a[1] + a[n - 1]) * 1.0) / 2.0;

        if ((sum - a[n - 1]) <= 0)
        {
            cout << 1 << " " << 2 << " " << n << endl;
            continue;
        }

        cout << -1 << endl;
    }
    return 0;
}