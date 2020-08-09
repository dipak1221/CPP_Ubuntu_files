#include <bits/stdc++.h>
using namespace std;
void fun(int i, float f)
{
    cout << "element is 1 " << endl;
}
void fun(float f, int i)
{
    cout << "element is 2 " << endl;
}
int main()
{
    //  = 12;
    fun(2, 56);
    fun(23.45, 45);
    cout << endl;
    return 0;
}