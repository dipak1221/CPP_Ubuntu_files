#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

protected:
    void setValue(int a)
    {
        this->a = a;
        cout << a << endl;
    }
};
class B : public A
{
public:
    void setData(int s)
    {
        setValue(s);
    }
};
int main()
{
    B a;
    a.setData(23);
    cout << endl;
    return 0;
}