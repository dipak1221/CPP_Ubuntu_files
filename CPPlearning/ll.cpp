#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
void deletefrompos(struct node *head)
{
    int pos, i = 1;
    cout << "Enter pos\n";
    cin >> pos;
    struct node *prev, *temp, *h;
    temp = head;
    while (i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    h = temp->next;
    // printf("%p", temp->next);
    // printf("%p", h);
    free(temp);
}
struct node *reverse(struct node *head)
{
    struct node *prev = NULL, *current, *nextnode;
    current = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head = prev;
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
    cout << endl;
}
struct node *create()
{
    int i = 2;
    struct node *newnode, *temp;
    do
    {
        cout << "Enter no\n";
        newnode = (struct node *)malloc(sizeof(struct node));
        cin >> newnode->data;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
            tail = temp;
        }
        cout << "Enter 0 to end\n";
        cin >> i;
    } while (i != 0);
}
int main()
{
    create();
    display(head);
    head = reverse(head);
    display(head);
    deletefrompos(head);
    display(head);

    return 0;
}