#include <bits/stdc++.h>
using namespace std;
class node
{
    int a;
    int b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "a= " << a << "  b= " << b << endl;
    }
    class node add(node m)
    {
        node k;
        k.a = m.a + this->a;
        k.b = m.b + this->b;
        return k;
    }
};
int main()
{
    node obj1, obj2, obj3;
    obj1.set_data(1, 7);
    obj2.set_data(2, 1);
    obj1.show_data();
    obj2.show_data();
    obj3 = obj1.add(obj2);
    obj3.show_data();

    // cout << sizeof(obj1) << endl;
    cout << endl;
    return 0;
}