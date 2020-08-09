#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a, b;
    A(int k)
    {
        a = 0, b = k;
    }
    A() {}
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void getData()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    A a;
    int k = 23;
    a.setData(2, 3);
    a.getData();
    A s = k;
    s.getData();
    cout << endl;
    return 0;
}