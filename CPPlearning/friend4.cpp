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
    friend Complex operator+(Complex);
};
Complex operator+(Complex c){
    Complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
int main()
{
    Complex c1, c3;
    c1.setData(10, 11);

    c3 = +c1;
    c3.showData();
    cout << endl;
    return 0;
}