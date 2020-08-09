#include <bits/stdc++.h>
using namespace std;
class Integer
{
public:
    Integer operator++(int)
    {
        Integer k;
        cout << "operator" << endl;
        return k;
    }
};
int main()
{
    Integer m1, m2;
    m1 = m2++;

    cout << endl;
    return 0;
}