#include <bits/stdc++.h>
using namespace std;
#define MAX 6
int q[MAX];
int front = -1, rear = -1;
void enqueuefront(int d)
{
    if (front == rear + 1 || (front == 0 && rear == MAX - 1))
    {
        cout << "queue is full\n";
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        q[front] = d;
    }
    else if (front == 0)
    {
        front = MAX - 1;
        q[front] = d;
    }
    else
    {
        q[--front] = d;
    }
}
void enqueuerear(int d)
{
    if (front == rear + 1 || front == 0 && rear == MAX - 1)
    {
        cout << "overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        q[rear] = d;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
        q[rear] = d;
    }
    else
    {
        q[++rear] = d;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        int i = front;
        do
        {
            cout << q[i] << " ";
            i = (i + 1) % MAX;
        } while ((i != rear + 1));
        cout << "---Completed" << endl;
    }
}
void deletefront()
{
    if (front == -1 && rear == -1)
    {
        cout << " IT is Empty" << endl;
    }
    else if (front == rear)
    {
        cout << "element is " << q[front] << endl;

        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    {
        cout << "element is " << q[front] << endl;
        front = 0;
    }
    else
    {
        cout << "element is " << q[front++] << endl;
    }
}
void deleterear()
{
    if (front == -1 && rear == -1)
    {
        cout << "Empty " << endl;
    }
    else if (rear == front)
    {
        cout << "element is " << q[rear] << endl;

        rear = -1;
        front = -1;
    }
    else if (rear == 0)
    {
        cout << "element is " << q[rear] << endl;

        rear = MAX - 1;
    }
    else
    {
        cout << "element is " << q[rear--] << endl;
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
    enqueuefront(3);
    enqueuefront(13);
    display();
    enqueuerear(56);
    enqueuerear(16);
    display();
    enqueuefront(3);
    display();
    enqueuefront(13);
    // enqueuefront(13);
    display();
    deletefront();
    deletefront();
    display();

    deleterear();
    deleterear();
    display();

    cout << endl;
    return 0;
}