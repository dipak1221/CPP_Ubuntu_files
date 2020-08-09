#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(2);
    for (int n = 3; n <= 100; n += 2)
    {
        int flag = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 || n % (n / i) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            a.push_back(n);
        }
    }

    // for (auto e : a)
    //     cout << e << " ";
    int count = 0;
    cout << endl;
    for (int i = 1; i < a.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += a[j];
            if (a[i] == sum)
            {
                cout << a[i] << endl;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}