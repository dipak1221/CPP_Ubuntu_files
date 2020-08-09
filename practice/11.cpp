#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                v1.push_back(i);
            }
            else
            {
                v1.push_back(i);
                v2.push_back(n / i);
            }
        }
    }

    for (auto e : v1)
    {
        cout << e << " ";
    }
    // cout << "\n";
    for (int i = v2.size() - 1; i >= 0; i--)
    {
        cout << v2[i] << " ";
    }

    return 0;
}