#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod(int a, int b) { return (a % b + b) % b; }

int main()
{
    vector<pair<int, int>> direction;
    direction = {{1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
    string input;
    int total = 0;
    vector<vector<char>> city_map(9);

    for (int i = 0; i < 9; i++)
    {
        getline(cin, input);
        for (char ch : input)
        {
            if (ch == 'a' || ch == 'c')
                total++;
            city_map[i].push_back(ch);
        }
    }

    int i = 0, j = 0;
    int selDirection = 0;
    int collision = 0;
    int infected = 0;

    while (1)
    {

        cout << i << " " << j << endl;
        i += direction[selDirection].first;
        j += direction[selDirection].second;
        
        if (i >= 20 && j >= 9)
            break;
        if (city_map[8 - j][i] == 'a')
        {
            selDirection = mod(selDirection + 1, 4);
            city_map[8 - j][i] = '-';
            infected++;
        }
        else if (city_map[8 - j][i] == 'c')
        {
            selDirection = mod(selDirection - 1, 4);
            city_map[8 - j][i] = '-';
            infected++;
        }
        else if (city_map[8 - j][i] == '*')
        {
            if (collision == 0)
            {
                selDirection = mod(selDirection + 1, 4);
                collision++;
            }
            else
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }

    for (auto it : city_map)
    {
        for (char ch : it)
        {
            cout << ch;
        }
        cout << endl;
    }
    cout << "safe=" << total - infected << endl;
    cout << "infected=" << infected;
    return 0;
}