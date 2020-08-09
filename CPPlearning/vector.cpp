#include <bits/stdc++.h>
using namespace std;
int main()
{
    // array<int, 3> a{4, 5, 7};
    vector<int> a;
    // size,capacity(),front(),back(),push_back(),pop_back()
    a.push_back(12);
    a.push_back(23);
    a.push_back(13);
    a.push_back(43);
    a.push_back(73);
    a.push_back(12);
    for (auto e : a)
    {
        cout << e << endl;
    }
    a.pop_back();
    cout << "\n";
    array<int, 5> v = {23, 456, 3, 56, 2};
    sort(v.begin(), v.end(),greater<int>());
    for (auto e : v)
    {
        cout << e << " ";
    }
    // vector<int>::iterator i = a.begin();
    // a.insert(i + a.size()-1, 100000);
    //cout << a.front()<< "----";
    for (auto e : a)
    {
        cout << e << endl;
    }
    // cout << a.capacity() << endl;

    return 0;
}