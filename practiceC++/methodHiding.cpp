#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    virtual void hello()
    {
        cout << "in A" << endl;
    }
};
class B : public A
{
public:
    void hello(int a)
    {
        cout << "in B " << endl;
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
    B b1;
    b1.hello(); //error
    b1.hello(5);
    cout << endl;
    return 0;
}