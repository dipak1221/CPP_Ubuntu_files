#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void f1()
    {
        cout << " in f1() A" << endl;
    }
};
class B : public A
{
public:
    void f1(int a)
    {
        cout << "in f1() B " << endl;
    }
};
int main()
{
    B a;
    a.f1();
    // a.A::f1();

    cout << endl;
    return 0;
}