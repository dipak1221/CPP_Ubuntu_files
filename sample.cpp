#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a[10] = {1, 1, 1, 1, 1, 7, 2, 7, 3, 5};
    unordered_map<int, int> map;
    for (int i = 0; i < 10; i++)
        map[a[i]]++;

    for (auto e : map)
        cout << e.first << " " << e.second << endl;
    return 0;
}
