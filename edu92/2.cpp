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
        string s;
        cin >> s;
        int *a = new int[10];

        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 48]++;
        }
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}