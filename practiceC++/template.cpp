#include <bits/stdc++.h>
using namespace std;

template <class T>
class Test
{
public:
    Test()
    {
        cout << "this is  class A" << endl;
    }
};

template <>
class Test<string>
{
public:
    Test()
    {
        cout << "this is string class A" << endl;
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
    Test<float> a1;
    Test<char> a2;
    Test<double> a3;
    Test<string> a4;
    cout << endl;
    return 0;
}