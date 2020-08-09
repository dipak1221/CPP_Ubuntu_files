#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *tail = NULL;
void reverse()
{
    struct node *temp, *current, *nextnode;
    current = nextnode = head;
    do
    {
        nextnode = nextnode->next;
        swap(current->prev, current->next);
        current = nextnode;
    } while (current != head);
    swap(head, tail);
}
void display(struct node *head)
{
    struct node *temp;
    temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << "    done----" << endl;
}
void create()
{
    int i = 2;
    struct node *newnode;
    do
    {
        cout << "Enter no\n";
        cin >> i;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = i;
        if (head == NULL)
        {
            head = tail = newnode;
            newnode->prev = head;
            newnode->next = tail;
            // tail = tail->next;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            tail->next = newnode;
            newnode->prev = tail;
        }
        tail = tail->next;
        cout << "Enter 0 to end \n ";
        cin >> i;
    } while (i != 0);
}
int main()
{
    create();
    display(head);
    reverse();
    display(head);
    // deletefrompos(head);
    // display(head);
    // insert(head);
    display(head);

    return 0;
}