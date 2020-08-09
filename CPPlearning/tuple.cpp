#include <bits/stdc++.h>
using namespace std;
int main()
{
    tuple<string, int, int> t1;
    t1 = make_tuple("dipak", 12, 34);
    cout << get<0>(t1) << endl;
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;

    return 0;
}