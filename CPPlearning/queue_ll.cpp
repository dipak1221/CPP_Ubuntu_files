#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void insert(int d)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = d;
    newnode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "--Completed\n";
}
void deleted()
{
    struct node *temp;
    temp = front;

    if (front == NULL)
    {
        cout << "Empty\n";
    }
    else if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        front = front->next;
    }
    // free(temp);
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

    display();
    deleted();
    deleted();
    deleted();
    deleted();
    display();
    if (rear == NULL)
    {
        cout << "33";
    }
    cout << endl;
    return 0;
}