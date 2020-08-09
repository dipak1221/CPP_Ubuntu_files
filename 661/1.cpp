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
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i + 1] - a[i]) > 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
    // cout << endl;
    return 0;
}