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
    map<int, int> m;
    // m.insert(make_pair(2, 3));
    // m.insert(make_pair(4, 5));
    // m.insert(make_pair(8, 9));
    m[2] = 12;
    m[6] = 23;
    m[23] = 45;
    for (auto e : m)
    {
        cout << e.first << " " << e.second << endl;
    }
    cout << endl;
    return 0;
}