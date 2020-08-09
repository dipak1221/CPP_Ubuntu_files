using namespace std;
#include <bits/stdc++.h>
namespace man
{
    int k;
    void f1();
    class A
    {
    public:
        void m();
    };

} 

void man::f1()
{
    cout << "namespace man f1()" << endl;
}
void man::A::m()
{
    cout << "namespace man A class and m()" << endl;
}
using namespace man;
int main()
{
    k = 23;
    f1();
    A obj;
    obj.m();
    return 0;
}