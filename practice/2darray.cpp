#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[][2] = {1, 2, 3, 4};
    int *p = a[0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            ;
        //cout << a[i][j] << " ";
        //cout << endl;
    }
    printf("%p\n", p);
    printf("%d\n", *(*(a + 1)));
    printf("%d\n", *(a[0] + 1));
    printf("%d\n", **a);
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%u\n", *(a + 1));
    printf("%u\n", *(p + 1));
    // printf("%p\n", &a[0][0]);
    printf("%u\n", *a + 1);
    // cout << k << endl;
    return 0;
}