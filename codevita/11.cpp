#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int min = a[i], max = 0;
        while (a[i] != 0)
        {
            int rem = a[i] % 10;
            if (rem > max)
            {
                max = rem;
            }
            if (rem < min)
            {
                min = rem;
            }
            a[i] = a[i] / 10;
        }
        int sum = (max * 11 + min * 7) % 100;
        if (sum < 9)
        {
            string k = "0" + to_string(sum % 10);
            s.push_back(k);
        }
        else
            s.push_back(to_string(sum));
    }
    int ans[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<string> remm;
    cout << "111111" << endl;
    for (int i = 0; i < s.size(); i = +2)
    {
        char c = s[i][0];
        ans[c - 48]++;
        remm.push_back(s[i + 1]);
    }
    int ans1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < remm.size(); i++)
    {
        char c = remm[i][0];
        ans1[c - 48]++;
        //remm.push_back(s[i + 1]);
    }
    for (auto e : ans)
    {
        cout << e << " ";
    }
    cout << endl;
    for (auto e : ans1)
    {
        cout << e << " ";
    }
    cout << endl;

    for (auto e : s)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}