#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int cmp(string a, string b)
{
    return a.compare(b) < 0 ? 1 : 0;
}
int main()
{
    vector<string> a;
    string t;
    ll n;
    cin >> n;
    int k, m, l, r;
    for (ll i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    // cout << "------------" << endl;
    for (ll i = 0; i < n; i++)
    {
        ll min = i;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[min].size() > a[j].size())
                min = j;
        }
        if (min != i)
        {
            swap(a[min], a[i]);
        }
        if (i == 0)
        {
            k = a[i].size();
            l = 0;
        }

        if (k < a[i].size())
        {
            k = a[i].size();
            sort(a.begin() + l, a.begin() + i, cmp);
            l = i;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    // cout << endl;
    return 0;
}