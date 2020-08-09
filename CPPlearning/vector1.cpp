#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    vector<ll> v;
    ll t, e;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> e;
        v.push_back(e);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll tt;
        cin >> tt;
        vector<ll>::iterator it = find(v.begin(), v.end(), tt);
        if (it != v.end())
        {
            cout << "Yes"<<" " << distance(v.begin(), it) + 1 << endl;
        }
        else
        {
            it = upper_bound(v.begin(), v.end(), 4);
            cout << "No " << distance(v.begin(), it) + 1 << endl;
        }

        // for(ll i=0;i<v.size();i++){
        //     if(tt==v[i]){
        //         cout<<"Yes"<<" "<<i+1<<endl;
        //         break;
        //     }
        //     else if(tt<v[i]){
        //         cout<<"No"<<" "<<i+1<<endl;
        //         break;
        //     }
        // }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
