#include <bits/stdc++.h>
using namespace std;
class complexx
{
public:
    int b;
    int a;
    complexx(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "hello 2 constructor" << endl;
    }
    complexx(int a)
    {
        this->a = a;
        b = 0;
        cout << "hello 1 constructor" << endl;
    }
    complexx()
    {

        b = 23;
        cout << "hello 0 constructor" << endl;
    }
    complexx( complexx &c)
    {
        c.a = c.a * 10;
        c.b = c.b * 10;
        cout << "hello copy constructor" << endl;
    }
};
int main()
{
    int a = 12, b = 23;
    complexx c2(a, a), c4(a);
    complexx c5(c2), c3(c4);
    // c5.a[2] = 566;
    cout << "c2 "
         << c2.a << " " << c2.b << endl;

    cout << "c5 "
         << c5.a << " " << c5.b << endl;
    // c5.a[2] = 56666;
    cout << "c4 "
         << c4.a << " " << c4.b << endl;

    cout << "c3 "
         << c3.a << " " << c3.b << endl;

    return 0;
}