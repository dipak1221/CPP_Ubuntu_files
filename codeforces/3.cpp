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
    ll t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        ll a[n];
        for (ll i = 0; i < s.size(); i++)
        {
            a[i] = stoi(s.substr(i, 1));
        }
        ll count = 0, len = 0, flag = 0;
        for (ll i = 0; i < n; i++)
        {
            ll sum = 0;
            // if (a[i] == 0)
            // {
            //     len++;
            //     flag = 1;
            //     continue;
            // }
            // if (flag == 1)
            // {
            //     for (ll j = i; j < n; j++)
            //     {
            //         if (len == 0)
            //         {
            //             len = 0;
            //         }
            //         //   flag = 0;
            //         sum += a[j];
            //         if (sum == (j - i + 1 + len--))
            //         {
            //             count++;
            //             //cout << a[i] << " ---" << endl;
            //         }
            //     }
            // }
            for (ll j = i; j < n && flag == 0; j++)
            {
                flag = 0;
                sum += a[j];
                if (sum == (j - i + 1))
                {
                    count++;
                }
                if (sum > s.size())
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}

91204190

206302393

7
C D D C D D D
C D D C D D D
D D D D D D C
D C D C D D D
D D D C D C D
C D D C D C C
C D C D C C C
