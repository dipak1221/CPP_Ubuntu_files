#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int q[MAX];
int front = -1;
int rear = -1;
void insert(int d)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        q[rear] = d;
    }
    else if (rear == MAX - 1)
    {
        cout << "overflow\n";
    }
    else
    {
        q[++rear] = d;
    }
}
void display()
{
    if (rear == -1)
    {
        cout << "is empty\n";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }
        cout << "--COmpleted\n"
             << endl;
    }
}
void deleted()
{
    if (front == -1 && rear == -1)
    {
        cout << "It is empty \n";
    }
    else if (front == rear)
    {
        cout << "deleted element is " << q[front++] << endl;
        front = -1;
        rear = -1;
    }
    else
    {
        cout << "deleted element is " << q[front++] << endl;
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
    insert(112);
    insert(12);
    insert(2);
    insert(1);
    display();
    deleted();
    deleted();
    deleted();
    deleted();
    deleted();
    insert(0);
    display();
    cout << endl;
    return 0;
}