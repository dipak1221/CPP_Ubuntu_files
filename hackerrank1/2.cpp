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
    ll n, v;
    cin >> n;

    ll cus[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> cus[i];
    }
    cin >> v;
    ll ven[v];
    for (ll i = 0; i < v; i++)
        cin >> ven[i];

    for (ll i = 0; i < n; i++)
    {
        ll pos = cus[i];
        ll min = pow(2, 64);
        ll cc;
        for (ll j = 0; j < v; j++)
        {
            ll k = abs(pos - ven[j]);
            if (k < min)
            {
                min = k;
                cc = ven[j];
            }
            if (min < k && min == k)
                break;
        }

        if (pos > cc)
        {
            cout << min << " " << 'L' << endl;
        }
        else if (pos < cc)
        {
            cout << min << " " << 'R' << endl;
        }
        else
        {
            cout << 0 << " " << 'O' << endl;
        }
    }
    cout << endl;
    return 0;
}