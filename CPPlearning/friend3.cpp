#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData()
    {
        cout << a << " " << b;
    }
friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex c1,Complex c2)
    {
        Complex temp;
        temp.a = c1.a + c2.a;
        temp.b = c1.b + c2.b;
        return temp;
    }
int main()
{
    Complex c1, c2, c3;
    c1.setData(10, 11);
    c2.setData(10, 11);
    c3 = operator+(c1,c2);
    c3.showData();
    cout << endl;
    return 0;
}