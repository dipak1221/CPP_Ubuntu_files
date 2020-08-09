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
    ifstream f;
    f.open("file1.cpp");
    char ch;
    ch = f.get();
    while (!f.eof())
    {
        cout << ch;
        f >> ch;
    }
    f.close();
    cout << endl;
    return 0;
}