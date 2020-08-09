#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, a, d, count = 0;
        cin >> n >> m >> a >> d;
        while (n <= m)
        {
            if (n % a != 0 && n % (a + d) != 0 && n % (a + 2 * d) != 0 && n % (a + 3 * d) != 0 && n % (a + 4 * d) != 0)
            {
                count++;
            }
            n++;
        }
        cout << count << endl;
    }
    // cout << endl;
    return 0;
}
