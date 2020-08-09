#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    A(int k)
    {
        cout << "A constructor  " << k << endl;
    }
    ~A()
    {
        cout << "A destructor " << endl;
    }
};
class B : A
{
    int b;

public:
    B(int a, int b) : A(b)
    {
        b = a;
        cout << " B constructor " << endl;
    }
    ~B()
    {
        cout << "B destructor " << endl;
    }
};

void fun()
{
    B a(2, 3);
}
int main()
{
    fun();

    cout << endl;
    return 0;
}