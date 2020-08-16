#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *create()
{
    int d;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data or -1 to end" << endl;
    cin >> d;
    if (d == -1)
    {
        return 0;
    }
    newnode->data = d;
    newnode->next = create();

    return newnode;
}

void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "--Completed" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    struct node *head;
    head = create();
    display(head);
    cout << endl;
    return 0;
}