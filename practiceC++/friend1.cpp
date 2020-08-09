#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int a1, int b1) : a(a1), b(b1)
    {
    }
    Complex() {}
    friend Complex operator++(Complex &);
    ~Complex()
    {
        cout << a << "----- " << b << endl;
    }
    friend istream &operator>>(istream &fin, Complex &c);
    friend ostream &operator<<(ostream &fin, Complex &c);
};
istream &operator>>(istream &fin, Complex &c)
{
    fin >> c.a >> c.b;
    return fin;
}
ostream &operator<<(ostream &fout, Complex &c)
{
    fout << c.a << "ans is " << c.b;
    return fout;
}
Complex operator++(Complex &a1)
{
    Complex c;
    c.a = ++a1.a;
    c.b = ++a1.b;
    return c;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Complex c1(9, 39), c2;
    c2 = ++c1;
    cin >> c1;
    cout << c1;

    cout << endl;
    return 0;
}