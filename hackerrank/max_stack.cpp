#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
int s[MAX];
int top = -1;
void push(int val)
{
    s[++top] = val;
}
void pop()
{
    top--;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    stack<int> s;
    stack<int> trace;
    int t, n, val, max = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> val;
            s.push(val);
            if (max <= val)
            {
                max = val;
                trace.push(val);
            }
        }
        else if (n == 2)
        {
            int k = s.top();
            s.pop();
            if (k == max)
            {
                trace.pop();
            }
            if (!trace.empty())
                max = trace.top();
            else
            {
                max = 0;
            }
        }
        else
        {
            cout << trace.top() << endl;
        }
    }
    // cout << endl;
    return 0;
}