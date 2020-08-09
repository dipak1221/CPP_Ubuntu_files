#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    virtual void hello1()
    {
        cout << " hello() in A" << endl;
    }
};
class B : public A
{
public:
    void hello1()
    {
        cout << " hello1() in B" << endl;
    }
};
int main()
{
    A a, *p;
    B b;
    p = &a;
    p->hello1();
    // a->hello();
    cout << endl;
    return 0;
}
