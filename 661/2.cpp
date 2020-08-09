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

    int n;
    while (t--)
    {
        cin >> n;
        ll min1; // = 9999999999;
        ll min2; // = 9999999999;
        ll *a = new ll[n];
        ll *b = new ll[n];
        cin >> a[0];
        min1 = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < min1)
                min1 = a[i];
        }
        cin >> b[0];
        min2 = b[0];
        for (int i = 1; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < min2)
                min2 = b[i];
        }
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] -= min1;
            b[i] -= min2;
            count = count + max(a[i], b[i]);
        }
        cout << count << endl;
    }
    return 0;
}