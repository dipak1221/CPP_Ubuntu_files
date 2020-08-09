#include <bits/stdc++.h>
using namespace std;
class Account
{
    public:
    int bal = 12;
    static float roi;
};
float Account::roi=23;
int main()
{
    Account a;
    cout << Account::roi;
// .roi << endl;

    cout << endl;
    return 0;
} 