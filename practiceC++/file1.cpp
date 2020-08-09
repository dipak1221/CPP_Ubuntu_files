#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    ofstream f;
    f.open("input1.txt", ios::ate);
    f << "11111";
    cout << f.tellp() << endl;
    f.seekp(2);
    cout << f.tellp() << endl;
    f << "222";
    cout << f.tellp() << endl;

    f.close();
    cout
        << endl;
    return 0;
}