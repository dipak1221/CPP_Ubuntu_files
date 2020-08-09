#include <iostream>
#include <cstring>
#define MAX 26
using namespace std;

bool isValid(int count[], int k)
{
    int value = 0;
    for (int i = 0; i < MAX; i++)
        if (count[i] > 0)
            value++;
    return (2 >= value);
}

void kUniques(string s)
{
    int u = 0;
    int n = s.length();
    int k = 2;

    int count[MAX];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++)
    {
        if (count[s[i] - 'a'] == 0)
            u++;
        count[s[i] - 'a']++;
    }

    int start = 0, end = 0;

    int length = 1, starting_index = 0;

    memset(count, 0, sizeof(count));

    count[s[0] - 'a']++;
    for (int i = 1; i < n; i++)
    {

        count[s[i] - 'a']++;
        end++;

        while (!isValid(count, k))
        {
            count[s[start] - 'a']--;
            start++;
        }

        if (end - start + 1 > length)
        {
            length = end - start + 1;
            starting_index = start;
        }
    }

    cout << s.substr(starting_index, length);
}

int main()
{
    string s = "abbccc";
    char *m = "hhh";
    cout << strlen(m);
    kUniques(s);
    return 0;
}
