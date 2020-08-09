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
    int t;
    cin >> t;
    int n, k, x;

    while (t--)
    {
        cin >> n >> k;
        int a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
        }
        int ans, total = 0, count = 0, maxi = 0;
        for (auto e : m)
        {
            if (e.second > 1)
            {
                total += e.second;
                maxi = max(maxi, e.second);
                count++;
            }
        }
        if (k == 1)
        {
            ans = maxi;
            cout << ans << endl;
        }
        else
        {
            ans = min(count * k, k + total);
            cout << ans << endl;
        }
    }
    // cout << endl;
    return 0;
}