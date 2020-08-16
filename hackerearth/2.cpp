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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *villain = new int[n];
        int *maxi = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> villain[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> maxi[i];
        }
        sort(villain, villain + n);
        sort(maxi, maxi + n);
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (maxi[i] < villain[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "LOSE" << endl;
        else
            cout << "WIN" << endl;
    }
    /* hello(),/**/

    cout << endl;
    return 0;
}