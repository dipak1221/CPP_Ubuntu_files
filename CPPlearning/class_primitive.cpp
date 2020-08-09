#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, b;
    operator int()
    {
        return a;
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
    A a;
    a.a = 12;
    int k;
    k = a;
    cout << a.a << k << endl;
    return 0;
}