#include <bits/stdc++.h>
using namespace std;
class B
{
public:
    int m, n;
    B() {}
    // B(A obj)
    // {
    //     m = obj.a;
    //     n = obj.b;
    // }
    void showData()
    {
        cout << "a = " << m << "  b=  " << n << endl;
    }
};
class A
{
public:
    int a, b;
    operator B()
    {
        B obj;
        obj.m = a;
        obj.n = b;
        return obj;
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
    B b;
    a.a = 22;
    a.b = 44;

    b = a;
    b.showData();
    cout << endl;
    return 0;
}