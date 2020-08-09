#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define lll long long int
lll gcd(lll a, lll b)
{
    // int rem = a % b;
    if (a == 0)
    {
        return b;
    }
    else
        return gcd(b % a, a);
}
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
        lll l, r;
        cin >> l >> r;
        int flag = 0, flag2 = 1;
        ;
        lll a, b, ll;
        lll k = 2;
        for (lll i = l; i < r; i++)
        {
            k = 2;
            flag2 = 1;
            // cout << "--" << endl;
            for (lll j = i * k; j <= r; j = i * k)
            {
                flag2 = 0;
                if ((l <= j) && (j <= r))
                {
                    a = i;
                    b = j;
                    flag = 1;
                    break;
                }
                k++;
            }
            if (flag == 1)
            {
                break;
            }
            if (flag2 == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}