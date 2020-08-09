#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
node *insert()
{
    node *l = NULL;
    node **n = &l;
    int data;
    do
    {
        cout << "Enter data \n";
        cin >> data;
        *n = new node;
        (*n)->data = data;
        n = &((*n)->next);
        cout << "Enter data 0 to exit \n";
        cin >> data;

    } while (data);
    return l;
}

void display(node *l)
{
    node *ptr;
    ptr = l;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "End of list" << endl;
}
int main()
{
    // ios::sync_with_stdio(0);
    //cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    node *l = insert();
    display(l);

    cout << endl;
    return 0;
}