#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, b, *p;
    A(int a, int b, int c) : a(a), b(b)
    {
        p = new int;
        *p = c;
    }
    void showData()
    {
        cout << a << "   " << b << "   " << *p << endl;
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

    A k(3, 5, 12);
    A d = k;

    k.showData();
    d.showData();
    delete d.p;
    k.showData();

    return 0;
}