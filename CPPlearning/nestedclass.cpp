#include <iostream>
#include <string.h>
using namespace std;
class A
{
    int rollno;
    char *name;
    class Address
    {
        int houseno;
        char *street;
        char *area;
        int pincode;

    public:
        void setAddress(int h, char *s, char *a, int p)
        {
            houseno = h;
            street = s;

            area = a;
            pincode = p;
        }
        void showAddress()
        {
            cout << "house no =" << houseno << endl;
            cout << "street no =" << street << endl;
            cout << "area =" << area << endl;
            cout << "pincode =" << pincode << endl;
        }
    };
    Address obj;

public:
    void setA(int r, char *n, int h, char *s, char *a, int p)
    {
        cout << "11";
        rollno = r;
        name = n;
        obj.setAddress(h, s, a, p);
    }
    void showA()
    {
        cout << "rollno =" << rollno << endl;
        cout << "name =" << name << endl;
        obj.showAddress();
    }
};

int main()
{
    cout << "11";
    A a;
    char *name;
    char *street;
    char *area;
    cout << "11";

    strcpy(name, "dipak");
    strcpy(street, "chs");
    strcpy(area, "kandivali(W)");
    // name = "dipak";
    a.setA(12, name, 121, street, area, 40014);
    a.showA();
}