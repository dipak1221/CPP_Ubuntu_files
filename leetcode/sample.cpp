#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    struct Node *next;
};
Node *head = NULL;
void create(struct Node **v, int data)
{
    int i = 0;
    //
    // printf("%p\n", *v);
    // printf("%p\n", NULL);
    // printf("%p\n", &*head);
    // printf("%p\n", v);
    // printf("%p\n", &head);
    // printf("%p\n", head);
    // printf("%p\n", &*v);
    // printf("%p\n", *v);
    // printf("%p\n", **v);
    // printf("%d\n", **v);

    // Node **temp;
    while (i < 5)
    {
        *v = new Node();
        (*v)->val = data;
        v = &((*v)->next);
        i++;
    }
}
void display(struct Node **v)
{
    while ((*v)->next != NULL)
    {
        cout << (*v)->val << " ";
        *v = (*v)->next;
    }
    cout << endl;
}
int main()
{

    int k = 12;
    int *p = &k;
    // printf("%p\n", p);
    // printf("%d\n", p);
    // printf("%p\n", &k);
    // printf("%p\n", &p);
    // printf("%d\n", *p);
    create(&head, 12);
    Node *temp = head;
    display(&temp);
    Node *temp1 = head;

    display(&temp1);
    return 0;
}