#include <bits/stdc++.h>
using namespace std;
template <class X,class Y>
class A
{
public:
    X a[10];
    Y b[10];
};
int main()
{
    A<int,float> m;
    // m.a[0] = 0;

    for (int i = 0; i < 10; i++)
        m.a[i] = i + 10;

    for (int i = 0; i < 10; i++)
        cout << m.a[i] << endl;

    for (int i = 0; i < 10; i++)
        m.b[i] = i + 10.12;

    for (int i = 0; i < 10; i++)
        cout << m.b[i] << endl;
    return 0;
}