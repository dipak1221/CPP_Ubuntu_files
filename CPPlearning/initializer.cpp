#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    const int y = 12;
    int &k;
    A(int &i) : k(i)
    {
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    int o = 4;
    A l(o);
    cout << l.k << l.y;
    cout
        << endl;
    return 0;
}