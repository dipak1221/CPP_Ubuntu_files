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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll count = 0;
        for (ll i = 1; i < n; i++)
        {
            ll j = i - 1;
            ll temp = a[i];
            while (j >= 0 && temp < a[j])
            {
                a[j + 1] = a[j];
                j--;
                count++;
            }
            a[j + 1] = temp;
        }
        cout << count << endl;
    }
    // cout << ceil(sqrt(17)) << endl;
    // cout << endl;
    return 0;
}