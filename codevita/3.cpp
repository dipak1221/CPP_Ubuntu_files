#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    int sample_no[s];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < s; i++)
    {
        int left, right, count = 0;
        cin >> left >> right;
        for (int j = 0; j < n; j++)
        {
            if (left <= a[j] && a[j] <= right)
                count++;
        }
        cout << count << " ";
    }
    cout << endl;

    return 0;
}

// 10 2
// 345 604 321 433 704 470 808 718 517 811
// 300 350
// 400 700

// 20 3
// 921 107 270 631 926 543 589 520 595 93 873 424 759 537 458 614 725 842 575 195
// 1 100
// 50 600
// 1 1000
