#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int diff, maxdiff = 0, temp, product;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        product = a[i] * b[i];
        sum += product;
        if (product < 0 && b[i] < 0)
            temp = (a[i] + 2 * k) * b[i];
        else if (product < 0 && a[i] < 0)
            temp = (a[i] - 2 * k) * b[i];
        else if (product > 0 && a[i] < 0)
            temp = (a[i] + 2 * k) * b[i];
        else if (product > 0 && b[i] > 0)
            temp = (a[i] + 2 * k) * b[i];

        diff = abs(product - temp);
        if (diff > maxdiff)
            maxdiff = diff;
    }
    cout << sum - maxdiff << endl;

    return 0;
}