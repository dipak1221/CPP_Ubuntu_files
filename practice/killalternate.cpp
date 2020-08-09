#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void create()
{
    int n, i = 1;
    struct node *newnode, *tail;
    cout << "enter no " << endl;
    cin >> n;
    while (n--)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = i++;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            newnode->next = head;
        }
        else
        {
            tail->next = newnode;
            newnode->next = head;
            tail = newnode;
        }
    }
}
void display()
{
    struct node *temp;
    temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void slicee()
{
    struct node *temp;
    temp = head;
    while (temp->next != temp)
    {
        temp->next = temp->next->next;
        temp = temp->next;
    }
    head=temp;
}
int main()
{
    create();
    display();
    slicee();
    display();

    cout << endl;
    return 0;
}