#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        return intervals;
    }
};
int cmp(vector<int> &a, vector<int> &b)
{
    return 
}
int main()
{
    vector<vector<int>> v;
    int n;
    for (int i = 0; i < 3; i++)
    {
        vector<int> t;

        for (int j = 0; j < 2; j++)
        {
            cin >> n;
            t.push_back(n);
        }
        v.push_back(t);
    }

    sort(v.begin(), v.end(), cmp);

    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (auto j = v[i].begin(); j != v[i].end(); j++)
            cout << *j << " ";
        cout << endl;
    }
    cout << endl;

    return 0;
}