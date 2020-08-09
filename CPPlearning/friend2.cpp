#include <bits/stdc++.h>

using namespace std;
class B;
class A
{
    int a;
    friend void fun(A, B);

public:
void setData(int a){
    this->a=a;
}
};
class B
{
    int b;
    friend void fun(A, B);

public:
void setData(int a){
    b=a;
}
};
void fun(A a, B b)
{
    cout << "friend fun() "<<a.a+b.b;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setData(10);
    obj2.setData(10);
    fun(obj1, obj2);
    cout << endl;
    return 0;
}