#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string m;
        for (int i = 0; i < indices.size(); i++)
        {
            m = m + s[indices[i]];
        }
        return m;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif

    string s = "aiohn";
    vector<int> a = {3,1,4,2,0};

    Solution S;
    cout << S.restoreString(s, a);
    cout << endl;
    return 0;
}