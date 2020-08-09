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
    int n;
    while (t--)
    {
        map<int, int> m;
        cin >> n;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
        }
        int total, maxi = 0;
        for (int i = 2; i <= n * 2; i++)
        {
            total = 0;
            for (auto e : m)
            {
                int other = i - e.first;
                if (other >= 1 && m.count(other))
                    total += min(e.second, m[other]);
            }
            total /= 2;
            maxi = max(total, maxi);
        }

        cout << maxi << endl;
    }
    // cout << endl;
    return 0;
}