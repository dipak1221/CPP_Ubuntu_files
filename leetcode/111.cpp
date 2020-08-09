#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size(), left = 0, ans = min(height[0], height[1]);

        // Outer loop to find left index. Iterate till (n-1)th index.
        for (int i = 0; i < n - 2; i++)
        {

            // If height at current index is lesser than the
            // chosen left, looping over this index isn't necessary
            if ((i) && (height[i] <= height[left]))
                continue;

            // Inner loop to find the best right index,
            // starting from right most index till (i+1)
            for (int j = n - 1; j >= i + 1; j--)
            {

                // If maximum area possible at this j-th index is less
                // than the current maximum, reducing j
                // further will only lead to lesser area. Hence break
                // out of this loop.
                int max_area = height[i] * (j - i);
                if (max_area < ans)
                    break;

                // Update area and left index if new maximum area is found
                int area = min(height[i], height[j]) * (j - i);
                if (area >= ans)
                {
                    left = i;
                    ans = area;
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << s.maxArea(a) << endl;

    return 0;
}