#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max = 0;
        int j = height.size() - 1;
        int i = 0;
        while (i < j)
        {
            cout << "hello" << endl;
        }

        return max;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << s.maxArea(a) << endl;

    return 0;
}