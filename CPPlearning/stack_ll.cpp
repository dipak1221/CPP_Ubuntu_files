#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
void push(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = top;
    top = newnode;
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
        cout << "Stack is empty\n";
    else
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
    cout << "   done---" << endl;
}
void pop()
{
    if (top == 0)
        cout << "stack is empyt\n";
    else
    {
        struct node *temp;
        temp = top;
        cout << top->data << endl;
        top = top->link;
        free(temp);
    }
}
void peek()
{
    if (top == 0)
        cout << "stack is empyt\n";
    else
    {
        cout << top->data << endl;
        // top = top->link;
    }
}
int main()
{
    push(12);
    push(124);
    push(2);
    push(1892);
    display();
    pop();
    display();
    peek();
    display();

    return 0;
}