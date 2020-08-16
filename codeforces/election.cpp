#include <bits/stdc++.h>
#define test(t) for (cin >> t; t; --t)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repr(i, k, n) for (ll i = k; i < n; i++)
#define repr_r(i, n) for (ll i = n - 1; i >= 0; i--)
#define mp make_pair
#define pb push_back
#define f first
#define sec second
#define in cin >>
#define out cout <<
#define endl '\n'
#define optimize                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int main()
{
    optimize
        ll n;
    cin >> n;
    ll a = 0, b = 0;
    string str;
    cin >> str;
    for (char c : str)
    {
        if (c == 'A')
            a++;
        if (c == 'B')
            b++;
    }
    str = 'A' + str + 'B';
    stack<char> stk;
    for (char c : str)
    {
        if (c == '-')
        {
            stk.push(c);
            continue;
        }
        int count = 0;
        while (!stk.empty() and stk.top() == '-')
        {
            count++;
            stk.pop();
        }
        if (!stk.empty() and stk.top() == c)
        {
            if (c == 'A')
                a += count;
            else
                b += count;
        }
        stk.push(c);
    }

    if (a > b)
        cout << 'A';
    else if (b > a)
        cout << 'B';
    else
        cout << "Coalition government";
    return 0;
}