#include <bits/stdc++.h>
using namespace std;
inline void hello()
{
    cout << "hello dipak" << endl;
}

int main()
{
    int x = 12, n = 34;
    int &y = x;
    int *p = &x;
    cout << x << " " << y << " " << *p << endl;
    x=34;
    cout << x << " " << y << " " << *p << endl;
    y=89;
    cout << x << " " << y << " " << *p << endl;
    (*p)++;
    cout << x << " " << y << " " << *p << endl;

    hello();

    cout << endl;
    return 0;
}