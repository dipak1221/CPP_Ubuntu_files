#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int q[MAX];
int front = -1;
int rear = -1;
void insert(int d)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        q[rear] = d;
    }
    else if ((rear + 1) % MAX == front)
    {
        cout << "Queue is FULL \n";
    }
    else
    {
        rear = (rear + 1) % MAX;
        q[rear] = d;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        cout << "It is empty\n";
    }
    else
    {
        i = front - 1;
        do
        {
            i = (i + 1) % MAX;
            cout << q[i] << " ";
        } while (i != rear);
        cout << "---Completed\n";
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow\n";
    }
    else if (rear == front)
    {
        cout << q[front] << " delete value is \n";
        front = rear = -1;
    }
    else
    {
        cout << q[front] << " delete value is \n";
        front = (front + 1) % MAX;
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
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    display();
    dequeue();
    dequeue();
    insert(15);
    insert(34);
    display();
    insert(23);

    cout << endl;
    return 0;
}