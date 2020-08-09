#include <bits/stdc++.h>
using namespace std;
class Complex
{

public:
    int a, b;
    ~Complex()
    {
        cout << "Destructor" << endl;
    }
};
void fun()
{
    Complex obj;
}
int main()
{
    fun();
    cout << endl;
    return 0;
}