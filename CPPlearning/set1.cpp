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
    set<int> s1;
    s1.insert(100);
    s1.insert(1020);
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);
    s1.insert(60);

    cout << endl;

    set<int>::iterator it;
    for (it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    s1.erase(s1.begin(), s1.find(30));
    for (it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    s1.erase(100);
    for (it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    cout << *s1.lower_bound(35) << endl;
    cout << *s1.upper_bound(50) << endl;
    cout << endl;
    set<int>::iterator itt = s1.find(10290);
    if (itt == s1.end())
    {
        cout << "not found ";
    }
    else
    {
        cout << "found";
    }
    cout << endl;
    s1.erase(660);
    for (it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}