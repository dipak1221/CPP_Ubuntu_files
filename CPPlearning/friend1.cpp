#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    void setData(int b)
    {
        this->a = b;
    }
    void showData()
    {
        cout << this->a << endl;
    }
    friend void show(A&);
};
void show(A &c)
{
    cout << "friend " << (c.a + 12) << endl;
}
int main()
{
    A a;
    a.setData(23);
    a.showData();
    show(a);
    cout << endl;
    return 0;
}