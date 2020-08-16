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
    ll n, count = 0;
    cin >> n;
    char ch;
    int arr[n][n] = {};
    ll h = 0, w = 0;
    int flag = 0;
    for (ll i = 0; i < n; i++)
    {
        flag = 0;
        for (ll j = 0; j < n; j++)
        {
            cin >> ch;
            if (ch == 'C' && flag == 0)
            {
                h++;
                flag = 1;
            }
            if (j + 1 == w && ch == 'C')
            {
                w--;
            }
        }
    }

    cout << min(w, h) << endl;
    return 0;
}