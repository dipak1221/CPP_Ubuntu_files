#include <bits/stdc++.h>
using namespace std;
class A
{

    int k = 12;

public:
    friend void hello(A &c)
    {
        cout << "hello man " << c.k;
    }
};
int main()
{
    A a;
    hello(a);
    cout << endl;
    return 0;
}