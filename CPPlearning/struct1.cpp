#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int node;
    char name[34];
};
int main()
{
    Node n1 = {12, "dipak gautam"};
    Node n2;
    cout << n1.node << " " << n1.name << endl;
    n2.node = 56;
    strcpy(n2.name, "hello man");
    cout << n2.node << " " << n2.name << endl;

    n2 = n1; //copy  a full n1 to n2

    cout << endl;
    return 0;
}