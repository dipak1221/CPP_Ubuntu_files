#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string s = "";
    while (n >= 0)
    {
        n -= 1;
        long long int rem = n % 26;
        s += (char)(97 + rem);
        n = n / 26;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}