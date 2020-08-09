#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "show A" << endl;
    }
    void print()
    {
        cout << "print A " << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "show B" << endl;
    }
    void print()
    {
        cout << "print B" << endl;
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
    A *a;
    B b;
    a = &b;
    a->show();
    a->print();

    cout << endl;
    return 0;
}