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
    int c, r;
    while (t--)
    {
        int digit = 0, win = 1;
        cin >> c >> r;
        if (c < 10 && r < 10)
        {
            cout << "1"
                 << " " << '1' << "\n";
        }
        else if (c < r)
        {
            digit = c / 9;
            if (c % 9 != 0)
            {
                digit++;
            }
            cout << "0"
                 << " " << digit << "\n";
        }
        else
        {
            digit = r / 9;
            if (r % 9 != 0)
                digit++;
            cout << "1"
                 << " " << digit << "\n";
        }
    }
    // cout << endl;
    return 0;
}