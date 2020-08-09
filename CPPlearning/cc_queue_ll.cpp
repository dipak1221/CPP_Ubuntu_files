#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int d)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = d;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
        newnode->next = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == 0 && rear == 0)
    {
        cout << "queue is empty\n";
    }
    else
    {
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != front);
        cout << "---It is completed\n";
    }
}
void dequeue()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        cout << "Queue is Empty\n";
    }
    else if (front == rear)
    {
        temp = front;
        cout << temp->data << "   deleted value is" << endl;
        free(temp);
        front = rear = 0;
    }
    else
    {
        temp = front;
        cout << temp->data << "   deleted value is" << endl;
        front = front->next;
        rear->next = front;
        free(temp);
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
    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();

    cout << endl;
    return 0;
}