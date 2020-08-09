#include <bits/stdc++.h>
using namespace std;
namespace H
{
    // A obj;
}
namespace Myspace
{
    int a;
    void f1();
    class A
    {
    public:
        void fun()
        {
            cout << "hello";
        }
    };
    A obj;
    // using namespace H;
} // namespace Myspace
void Myspace::f1()
{
    cout << "in f1()" << endl;
}
// namespace Myspace
using namespace Myspace;
// namespace Myspace
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    a = 12;
    f1();
    obj.fun();
    cout << endl;
    return 0;
}