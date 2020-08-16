#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i == 0) && (n / i == i))
        {
            return 1;
        }
    }
    return 0;
}
int getMaxArea(int hist[], int n)
{
    stack<int> s;

    int max_area = 0;
    int tp;
    int top_area;
    int i = 0;
    while (i < n)
    {
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);

        else
        {
            tp = s.top();

            s.pop();

            top_area = hist[tp] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < top_area)
                max_area = top_area;
        }
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        top_area = hist[tp] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < top_area)
            max_area = top_area;
    }

    return max_area;
}

int main()
{
    int n;
    cin >> n;

    char arr[1000][1000];
    int arr2[1000][1000];
    int row[1000], col[1000];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == 'D')
                arr2[i][j] = 0;
            else
                arr2[i][j] = 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + arr2[i][j];
        }
        row[i] = n - sum;
    }

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + arr2[j][i];
        }
        col[i] = n - sum;
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (row[i] != 0)
        {
            break;
        }
        else
            count++;
    }
    int count2 = 0;
    for (i = 0; i < n; i++)
    {
        if (col[i] != 0)
        {
            break;
        }
        else
            count2++;
    }
    if (count == n && count2 == n)
        cout << "0";
    else
    {

        int area1, area2;
        area1 = getMaxArea(row, n);
        area2 = getMaxArea(col, n);

        if (isPerfectSquare(area1) && isPerfectSquare(area2))
        {
            int max1 = max(sqrt(area1), sqrt(area2));
            cout << max1;
        }
        else if (isPerfectSquare(area1) && !isPerfectSquare(area2))
            cout << sqrt(area1);
        else if (isPerfectSquare(area2) && !isPerfectSquare(area1))
            cout << sqrt(area2);
        else
            cout << "1";
    }
}