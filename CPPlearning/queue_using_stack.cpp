#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;
void push1(int d)
{
    if (top1 == MAX - 1)
    {
        cout << "overflow stack 1\n";
    }
    else
    {
        s1[++top1] = d;
    }
}
void push2(int d)
{
    if (top2 == MAX - 1)
    {
        cout << "overflow stack 2 \n";
    }
    else
    {
        s2[++top2] = d;
    }
}
int pop2()
{
    return s2[top2--];
}
int pop1()
{
    return s1[top1--];
}
void dequeue()
{
    if (top1 == -1)
    {
        cout << "Stack is EMpty\n";
    }
    else
    {
        for (int i = top1; i >= 0; i--)
        {
            push2(pop1());
        }
        cout << "poped value is " << pop2() << endl;
        for (int i = top2; i >= 0; i--)
        {
            push1(pop2());
        }
    }
}
void enqueue(int d)
{
    push1(d);
}
void display()
{
    if (top1 == -1)
    {
        cout << "Stack is EMpty\n";
    }
    else
    {
        for (int i = top1; i >= 0; i--)
        {
            push2(s1[i]);
        }
        for (int i = top2; i >= 0; i--)
        {
            cout << pop2() << " ";
        }
        cout << "-- it is completed " << endl;
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
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();

    cout << endl;
    return 0;
}