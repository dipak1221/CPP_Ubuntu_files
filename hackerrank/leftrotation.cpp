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
    int n, r;
    cin >> n >> r;
    int a[n * 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[n + i] = a[i];
    }
    r = r % n;
    vector<int> ans;
    for (int i = r; i < n + r; i++)
    {
        ans.push_back(a[i]);
    }
    for (auto e : ans)
    {
        cout << e << ' ';
    }

    cout << endl;
    return 0;
}