#include <bits/stdc++.h>
using namespace std;
class B;
class B
{
public:
    int n, m;
    // B(A &b1)
    // {
    //     n = b1.a;
    //     m = b1.b;
    // }
};
class A
{
public:
    int a, b;
    A() {}
    operator B()
    {
        B b1;
        b1.n = a;
        b1.m = b;
        return b1;
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
    A a1;
    a1.a = 1;
    a1.b = 2;
    B b1 = a1;

    cout << b1.n << " " << b1.m << endl;
    return 0;
}