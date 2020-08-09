#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int s[MAX];
int top = -1;
void push()
{
    int data;
    cout << "Enter data\n";
    cin >> data;
    if (top == MAX - 1)
        cout << "OVerflow";
    else
    {
        s[++top] = data;
    }
}
void display()
{
    if (top == -1)
    {
        cout << "Empty\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
            cout << s[i] << " ";
        cout << "      done--" << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Empty\n";
    }
    else
    {
        cout << s[top--] << endl;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Empty\n";
    }
    else
    {
        cout << s[top] << endl;
    }
}
int main()
{
    int n;
    do
    {
        cout << "1 push no \n";
        cout << "2 display no \n";
        cout << "3 pop no \n";
        cout << "4 peek no \n";
        cin >> n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    } while (n != 0);

    return 0;
}