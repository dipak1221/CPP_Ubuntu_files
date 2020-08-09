#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    int a, b;
    void showData()
    {
        cout << a << " " << b << endl;
    }
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(4, 7);
    c3 = c1 + (c2);
    c3.showData();
    cout << endl;
    return 0;
}