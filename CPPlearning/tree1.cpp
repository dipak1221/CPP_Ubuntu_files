// anchestor : Any predecessor node in a path from root node to that node

// decendent : Any successor node in a path from that node to leaf node

// path: path is sequence of consecutive edges between any source node and destination node

// edges : edge is a linked between two nodes

// Tree: Tree is a collection of nodes linked together to stimulates hirarchy

// siblings: The node which has a common parent

// degree: A node which have a max number of children For a tree the node which has a max children is a dregree of tree

// depth: the number of edges form root node to that node

// height: the max number of edges from leaf node to that node

// level: is a depth of tree

// if a tree has n edges than it should have n + 1 nodes

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create()
{
    int d;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data of -1 for exit";
    cin >> d;
    if (d == -1)
    {
        return 0;
    }
    newnode->data = d;
    cout << "Enter left node " << endl;
    newnode->left = create();
    cout << "Enter right node" << endl;
    newnode->right = create();
    return newnode;
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
#ifndef ONLINE_JUDGE
// freopen("input1.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    struct node *root;
    root = create();
    // display(root);
    // cout << endl;
    return 0;
}