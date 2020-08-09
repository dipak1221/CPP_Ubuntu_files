#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int stackk[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "stack is overflow \n";
    }
    else
    {
        stackk[++top] = data;
    }
}
int pop()
{
    if (top == -1)
    {
        cout << "stack is underflow \n";
        return 0;
    }
    else
    {
        return stackk[top--];
    }
}
void display()
{
    if (top == -1)
    {
        cout << "stack is Empty\n";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << stackk[i] << " ";
        }
        cout << endl;
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
    push(23);
    push(3);
    push(2);
    push(1);
    push(230);
    push(0);
    display();
    int k = pop();
    cout << k << endl;
    display();
    cout << endl;
    return 0;
}