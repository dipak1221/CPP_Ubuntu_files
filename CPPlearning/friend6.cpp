#include <bits/stdc++.h>
using namespace std;
class B;
class A
{

public:
    void fun(B &);

    void foo(B &);
};
class B
{
public:
    void hello()
    {
        cout << "hello in B" << endl;
    }
    friend class A;
    // friend void A::fun();
    // friend void A::foo();
};

void A::fun(B &b)
{
    b.hello();
    cout << "fun() of A" << endl;
}
void A::foo(B &b)
{
    b.hello();

    cout << "foo() of A" << endl;
}

int main()
{
    A a;
    B b;
    a.fun(b);
    a.foo(b);

    cout << endl;
    return 0;
}