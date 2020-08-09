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
    // h = temp->next;
    // printf("%p", temp->next);
    // printf("%p", h);
    free(temp);
}
struct node *reverse(struct node *head)
{
    struct node *ptr = tail->next, *prev, *current, *nextnode;
    current = nextnode = head;
    prev = tail;
    do
    {
        nextnode = nextnode->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    } while (nextnode != head);
    swap(tail, head);
    return head;
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
    {
        /* code */
    }

    cout << "   done " << endl;
}
void create()
{
    int i = 2;
    struct node *newnode;
    do
    {
        cout << "Enter no\n";
        newnode = (struct node *)malloc(sizeof(struct node));
        cin >> newnode->data;
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            tail->next = newnode;

            tail = tail->next;
            // tail = temp;
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