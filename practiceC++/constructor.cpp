#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, b;
    A()
    {
        cout << "A()" << endl;
    }
    A(int a)
    {
        cout << "A{a}" << a << endl;
    }
    A(int a, int b)
    {
        cout << "A(a,b)" << endl;
    }
    A(A &c)
    {
        cout << "copy constructor" << endl;
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
    A b = (a);
    cout << endl;
    return 0;
}