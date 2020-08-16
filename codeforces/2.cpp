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
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int m = (s.size() / 2) + 5;
        int a[m];
        int count = 0, i = 0, j = 0;
        while (i < s.size())
        {

            if (s[i] == '1')
            {
                count++;
            }
            else if (count != 0)
            {

                a[j++] = count;
                count = 0;
            }
            i++;
        }
        if (count != 0)
        {

            a[j++] = count;
            //   count = 0;
        }
        int sum = 0;
        sort(a, a + j, greater<int>());
        for (int i = 0; i < j; i += 2)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}