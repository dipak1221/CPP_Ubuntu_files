#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
    A operator++(int)
    {
        A temp;
        temp.a = -a;
        return temp;
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
    A s1, s2;
    s1.a = 2;
    s2=s1++;
    cout << s2.a << endl;

    cout
        << endl;
    return 0;
}