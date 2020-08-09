#include <bits/stdc++.h>
using namespace std;
struct suffix
{
    int index;
    char *ch;
};
int search(int *suffix, char *pat, char *s, int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r - 1) / 2;
        int res = strncmp(pat, s + suffix[mid], strlen(pat));
        if (res == 0)
        {
            cout << "found at " << suffix[mid] << endl;
            return suffix[mid];
        }

        if (res < 0)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "pattern not found " << endl;
    return 0;
}
int cmp(struct suffix a, struct suffix b)
{
    return strcmp(a.ch, b.ch) < 0 ? 1 : 0;
}
int main()
{
    char s[] = "banana";
    char pat[] = "an";
    struct suffix suffix_arr[6];
    for (int i = 0; i < strlen(s); i++)
    {
        suffix_arr[i].index = i;
        suffix_arr[i].ch = (s + i);
    }
    sort(suffix_arr, suffix_arr + 6, cmp);
    int suffixx[strlen(s)];
    for (int i = 0; i < strlen(s); i++)

        suffixx[i] = suffix_arr[i].index;
    for (int i = 0; i < 6; i++)
    {
        cout << suffix_arr[i].ch << " " << suffixx[i] << " " << endl;
    }
    cout << endl;

    int found = search(suffixx, pat, s, strlen(s));
    cout << endl
         << found << endl;
    return 0;
}