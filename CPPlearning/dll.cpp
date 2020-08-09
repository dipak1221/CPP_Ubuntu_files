#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *tail = NULL;
void insert(struct node *head)
{
    struct node *temp = head, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int pos, i = 1;
    cin >> pos;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->data = 23;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;
}
void deletefrompos(struct node *head)
{
    int pos, i = 1;
    cout << "Enter pos\n";
    cin >> pos;
    struct node *prevnode, *temp, *h;
    temp = head;
    while (i < pos)
    {
        prevnode = temp;
        temp = temp->next;
        i++;
    }
    prevnode->next = temp->next;
    temp->next->prev = prevnode;
    // printf("%p", temp->next);
    // printf("%p", h);
    free(temp);
}
struct node *reverse()
{
    struct node *prev = NULL, *current, *nextnode;
    current = nextnode = head;
    while (current != NULL)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    swap(tail, head);
    return head;
}
void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "done----" << endl;
}
struct node *create()
{
    int i = 1;
    struct node *newnode;
    do
    {
        cout << "Enter no\n";
        newnode = (struct node *)malloc(sizeof(struct node));
        cin >> newnode->data;
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = tail->next;
            // tail = temp;
        }
        cout << "Enter 0 to end\n";
        cin >> i;
    } while (i != 0);
    return head;
}
int main()
{
    create();
    display(head);
    reverse();
    display(head);
    deletefrompos(head);
    display(head);
    insert(head);
    display(head);

    return 0;
}