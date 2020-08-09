#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    struct ListNode *next;
};
struct ListNode *head1 = NULL;
struct ListNode *head2 = NULL;
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *l3 = NULL;
        ListNode **node = &l3;
        while (temp1 != NULL || temp2 != NULL)
        {
            if (temp1 != NULL && temp2 != NULL)
            {
                *node = new ListNode();
                if (temp1->data > temp2->data)
                {
                    (*node)->data = temp2->data;
                    temp2 = temp2->next;
                }
                else
                {
                    (*node)->data = temp1->data;
                    temp1 = temp1->next;
                }
                node = &((*node)->next);
            }
            else
            {
                while (temp1 != NULL)
                {
                    *node = new ListNode();
                    (*node)->data = temp1->data;
                    temp1 = temp1->next;

                    node = &((*node)->next);
                }
                while (temp2 != NULL)
                {
                    *node = new ListNode();
                    (*node)->data = temp2->data;
                    temp2 = temp2->next;

                    node = &((*node)->next);
                }
            }
        }
        return l3;
    }
};
void create(struct ListNode **newnode)
{
    // struct ListNode *newnode;
    int data;
    do
    {
        cout << "Enter no\n";
        cin >> data;

        *newnode = new ListNode();
        (*newnode)->data = data;

        newnode = &((*newnode)->next);

        cout << "Enter 0 to end \n";
        cin >> data;
    } while (data != 0);
    // return head;
}
void display(struct ListNode **v)
{

    while (*v != NULL)
    {
        cout << (*v)->data << " ";
        (*v) = (*v)->next;
    }
    cout << "done----" << endl;
}
int main()
{

    create(&head1);
    create(&head2);
    ListNode *temp1 = head1;
    ListNode *temp2 = head2;
    display(&temp1);
    display(&temp2);

    Solution s;
    ListNode *temp;

    temp = s.mergeTwoLists(head1, head2);
    display(&temp);

    return 0;
}