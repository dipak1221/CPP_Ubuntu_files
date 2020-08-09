#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words;
    vector<string> symbol;
    string s;
    cin >> s;
    int i = 0;
    string k = "";
    string m = "";
    while (i < s.size())
    {
        if (ispunct(s[i]))
        {
            words.push_back(k);
            k = "";
            m += s[i];

            if (ispunct(s[i + 1]))
            {
                i++;
                m += s[i];
            }
            symbol.push_back(m);
            m = "";
            i++;
            continue;
        }
        k += s[i];
        i++;
    }
    words.push_back(k);

    string n = "";
    int o = 0;

    // for (auto e : words)
    //     cout << e << " ";

    // cout << endl;
    // for (auto e : symbol)
    //     cout << e << " ";
    // cout << endl;

    for (int i = words.size() - 1; i > 0; i--)
    {
        n += words[i] + symbol[o++];
    }
    n += words[0];
    cout << n << endl;
    return 0;
}