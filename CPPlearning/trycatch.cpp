#include <bits/stdc++.h>
using namespace std;
void fun()
{
    cout << "in fun()" << endl;
    throw;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    try
    {
        cout << "inside try" << endl;
        fun();
    }
    catch (...)
    {
        cout << "Exception occure " << endl;
    }
    cout << endl;
    return 0;
}