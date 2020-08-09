#include <bits/stdc++.h>
using namespace std;
int main()
{

    array<int, 5> a = {3, 54, 6};
   // a[0] = 12;
    for (auto i = a.begin(); i < a.end(); i++)
        cout << *i << endl;

    cout << a.front() << endl;
    cout << a.back() << endl;
    a.fill(10);
    // cout << a.swap(b) << endl;
    cout << a.size() << endl;
    cout << a.at(0) << "----" << endl;

    return 0;
}