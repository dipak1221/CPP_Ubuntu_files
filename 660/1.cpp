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
    vector<string> ans;
    vector<string> v = {"cool", "lock", "cook"};
    int a[v.size()][26];
    // for (int i = 0; i < v.size(); i++)
    // {
    //     a[i] = new int[26];
    // }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            a[i][v[i][j] - 97]++;
        }
    }
    // cout << "111" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // count = 0;
        for (int j = 0; j < 26; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int k = 0, count;
    for (int j = 0; j < 26; j++)
    {
        count = 0;
        int k[v.size()];
        for (int i = 0; i < v.size(); i++)
        {
            if (a[i][j] == 0)
            {
                break;
            }
            else
            {
                count++;
                k[i] = a[i][j];
                // cout << a[i][j] << endl;
            }
        }
        if (count == v.size())
        {
            // cout << "   " << (char)(j + 97) << endl;
            string ss;
            ss = (char)(j + 97);
            // cout << ss << " " << k << endl;
            for (int kk = 0; kk < *min_element(k, k + v.size()); kk++)
            {
                ans.push_back(ss);
            }
        }
    }
    for (auto e : ans)
    {
        cout << e << " ";
    }

    // return ans;
    cout << endl;
    return 0;
}