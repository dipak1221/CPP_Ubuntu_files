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
    int a[] = {1, 2, 3, 4, 5, 6};
    map<int, int> m;
    for (int i = 0; i < 9; i++)
    {
        m[a[i]]++;
        if (m[a[i]] == 2)
        {
            cout << "cycle is present";
            break;
        }
    }

    cout << endl;
    return 0;
}