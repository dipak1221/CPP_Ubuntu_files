#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i < 5; i++)
        sum += i;

    cout << sum << endl;
    sum = sum - 2 + 10;
    cout << sum << endl;
    
    return 0;
}