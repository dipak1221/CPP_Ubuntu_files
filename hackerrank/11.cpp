#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        if (sum % 3 == 0)
        {
            cout << sum << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if ((sum - a[i]) % 3 == 0)
            {
                cout << sum - a[i] << endl;
                break;
            }
        }
    }

    return 0;
}