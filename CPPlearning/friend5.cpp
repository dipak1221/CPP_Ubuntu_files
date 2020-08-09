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
    friend ostream &operator<<(ostream &, Complex &);
    friend istream &operator>>(istream &, Complex &);
};
ostream &operator<<(ostream &dout, Complex &c)
{
    cout << c.a << " ----- " << c.b << endl;
    dout << c.a << "--------- " << c.b << endl;
    return dout;
}
istream &operator>>(istream &din, Complex &c)
{
    din >> c.a >> c.b;
    return din;
}

int main()
{
    Complex c1, c2, c3, c4;
    // c1.setData(12, 34);
    cout << "Enter no. " << endl;
    // cin >> c1 >> c2;
    (operator>>(operator>>(cin, c1), c2));
    cout << "you enter" << endl;
    // cout << c1 << c2;
    (operator<<(operator<<(cout, c1), c2));
    // c3.showData();
    cout << endl;
    return 0;
}