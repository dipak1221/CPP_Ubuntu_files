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
    string s;
    cin >> s;
    string ans;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'e'&& s[i]!='y')
        {
            ans += '.';
            ans += (char)s[i];
        }
    }
    cout << ans << endl;
    return 0;
}