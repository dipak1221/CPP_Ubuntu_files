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
    int k, n, w, total;
    cin >> k >> n >> w;
    total = w * (2 * k + (w - 1) * k) / 2;

    if (total > n)
        cout << total - n << endl;
    else
        cout << 0 << endl;

    return 0;
}