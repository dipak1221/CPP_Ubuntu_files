#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    vector<double> v;
    double x;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x * 1.000);
    }
    int total = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //  cout << v[i] * v[j] << "   " << int(v[i] * v[j]) << endl;
            if ((v[i] * v[j] * 1.0000) - int(v[i] * v[j] * 1.0000) == 0.0000)
            {
                cout << v[i] << " ----- " << v[j] << endl;
                total++;
            }
        }
    }
    cout << total << endl;
    //cout << endl;
    return 0;
}