#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int a)
{
    struct node *newnode;
    newnode = new node;

    newnode->data = a;
    if (top == NULL)
    {
        newnode->next = NULL;
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}
void display()
{
    struct node *ptr;
    ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << "List complete \n";
}
void pop()
{
    if (top == NULL)
    {
        cout << "underflow\n";
    }
    else
    {
        cout << "\nremoved value is " << top->data << endl;
        top = top->next;
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    push(10);
    push(12);
    push(13);
    push(14);
    display();
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();

    cout << endl;
    return 0;
}