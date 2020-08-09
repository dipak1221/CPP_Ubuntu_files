#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fibo(ll a, ll b, ll n)
{

    if (n >= a && b >= n)
    {
        cout << a << " " << b << endl;
        return;
    }
    else
    {
        cout << b << " " << a + b << endl;
        fibo(b, a + b, n);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        ll n;
        cin >> a >> b >> n;
        fibo(a.size(), b.size(), n);

        //   cout << k << "--";
    }
    cout << endl;
    return 0;
}