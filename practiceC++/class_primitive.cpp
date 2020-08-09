#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
    operator int()
    {
        return a;
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
    A a1;
    a1.a = 1662;
    
    int x = a1;

    // cout << "value is " << x << endl;
    cout << "value of class is  " << x << endl;
    return 0;
}