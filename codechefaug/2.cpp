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
    int n, p;
    while (t--)
    {
        cin >> n >> p;
        int a[n];
        int ans = -1, mm = 100000;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (p % a[i] == 0)
            {
                if ((p / a[i]) < mm)
                {
                    ans = a[i];
                    mm = p / a[i];
                }
            }
        }
        cout << ans << endl;
    }
    cout << endl;
    return 0;
}