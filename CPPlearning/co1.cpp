#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4, sum = 0;
    int i = 1;
    while (i <= n)
    {
        cout << n / i << endl;
        sum += i * (n / i);
        i++;
    }
    cout << sum;
    return 0;
}