#include <bits/stdc++.h>
using namespace std;
// template <class T>
// void hello()
// {
//     cout << "Generalized template" << endl;
// }
template <>
void hello<string>()
{
    cout << "Specialized template" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    // hello();
    hello<int>();
    hello<float>();
    hello<string>();
    cout << endl;
    return 0;
}