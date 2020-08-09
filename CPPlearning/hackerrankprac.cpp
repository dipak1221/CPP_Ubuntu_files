/* Read input from STDIN. Print your output to STDOUT*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            b.push_back(k);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int count = 0, i = 0, j = 0;
        while (j < n)
        {
            if (a[j] > b[i])
            {
                i++;
                count++;
            }
            j++;
        }
        cout << count << endl;
    }
}
