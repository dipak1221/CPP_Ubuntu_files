#include <bits/stdc++.h>
using namespace std;
class A
{

public:
    int a, b;
    A() {}

    A(int a1)
    {
        a = a1;
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
    A c1;
    c1 = 5;
    cout << "c1 value is  " << c1.a << endl;
    cout << endl;
    return 0;
}