#include <bits/stdc++.h>
using namespace std;
#define MAX 10
char s[MAX];
int top = -1;
void push(char i)
{
    if (top == MAX - 1)
    {
        cout << "overflow \n";
    }
    else
    {
        s[++top] = i;
    }
}
void display()
{
    if (top == -1)
    {
        cout << "It is Empty\n";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << s[i] << " ";
        }
        cout << "----Complete" << endl;
    }
}
char pop()
{
    if (top == -1)
    {
        cout << "underflow\n";
    }
    else
    {
        return s[top--];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    string s = "A – (B / C + (D % E * F) / G)* H";
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(s[i]);
            cout << s[i] << " " << endl;
            continue;
        }
        display();
        if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            char p = pop();
            if ((s[i] == ')' && '(' == p) || (s[i] == '}' && '{' == p) || (s[i] == ']' && '[' == p))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }

    if (top == -1 && flag == 0)
    {
        cout << "this is  a valid expression\n";
    }
    else if (flag == 1)
    {

        cout << "this is not a valid 1 expression\n";
    }
    else
    {
        cout << "it is a not valid expression\n";
    }

    cout << endl;
    return 0;
}