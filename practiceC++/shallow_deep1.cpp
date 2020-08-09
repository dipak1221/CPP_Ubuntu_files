#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, *p;
    A(int l, int m)
    {
        p = new int;
        *p = m;
        a = l;
    }
    A(A &a1)
    {
        p = new int;
        *p = *a1.p;
        a = a1.a;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    A a(2, 3);
    cout << a.a << ' ' << a.p << endl;
    A b = a;
    cout << b.a << ' ' << b.p << endl;
    cout << endl;
    return 0;
}
