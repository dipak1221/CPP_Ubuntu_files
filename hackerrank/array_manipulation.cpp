#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, q, max = 0, x = 0;
    cin >> n >> q;
    ll *ar = new ll[n + 1]();
    ll a, b, v;
    while (q--)
    {
        cin >> a >> b >> v;

        ar[a] += v;
        if ((b + 1) <= n)
            ar[b + 1] -= v;
    }
    for (ll i = 1; i < n + 1; i++)
    {
        x = x + ar[i];
        if (max < x)
            max = x;
    }

    cout << max << endl;
    return 0;
}