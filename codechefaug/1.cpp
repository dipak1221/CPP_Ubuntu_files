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
    ll t;
    cin >> t;
    ll n, h;
    while (t--)
    {
        cin >> n >> h;
        int flag = 1;
        while (h > 0)
        {
            n = n - h;
            if (n <= 0)
            {
                flag = 0;
                break;
            }
            h = h / 2;
        }
        if (flag == 0)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }
    }
    // cout << endl;
    return 0;
}