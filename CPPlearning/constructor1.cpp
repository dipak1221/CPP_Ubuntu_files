#include <bits/stdc++.h>
using namespace std;
class complexx
{
    int a, b;

public:
    complexx(int a, int b)
    {
        cout << "hello 1 constructor" << endl;
    }
    complexx(int a)
    {
        cout << "hello 2 constructor" << endl;
    }
    complexx()
    {
        cout << "hello 3 constructor" << endl;
    }
};
int main()
{
    complexx c1(5), c2 = complexx(2, 3), c3,c4=5;

    cout << endl;
    return 0;
}