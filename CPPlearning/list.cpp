#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l{123, 56, 87, 89, 90, 12};
    l.push_back(12);
    l.push_front(23);
    l.sort();

    l.reverse();
    l.remove(12);
    cout << l.back() << endl;
    for (auto e : l)

    {
        cout << e << " ";
    }
    cout << "\n"
         << l.size();
    cout << endl;
    return 0;
}