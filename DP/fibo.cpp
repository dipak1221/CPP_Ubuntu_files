#include <bits/stdc++.h>
using namespace std;
int memo[100];
int static k = 0;
int fibo(int n)
{
    memo[0] = 0;
    memo[1] = 1;
    k++;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
        memo[i] = memo[(i - 1)] + memo[(i - 2)];

    return memo[n];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    int n = 12;
    cout << fibo(n - 1) << endl;

    cout << "call is " << k << endl;
    return 0;
}