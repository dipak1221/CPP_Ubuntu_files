#include <iostream>
using namespace std;
class Man
{
private:
    int r;
    string s;

public:
    int k;
    void Man1(int r, string s)
    {
        this->r = r;
        this->s = s;
    }
    void setMan(int r, string s)
    {
        this->r = r;
        this->s = s;
    }
    void getMan()
    {
        cout << "\nname is " << s;
        cout << "\n roll is " << r;
    }
};
int main()
{
    Man m;
    m.setMan(23, "dipak");
    pair<int, string> p1;
    pair<string, int> p2;

    pair<int, Man> p3;

    p1 = make_pair(12, "dipak");
    p2 = make_pair("12", 34);
    p3 = make_pair(67, m);

    cout << "\n pair1 ";
    cout << p1.first << "   " << p1.second;

    cout << "\n pair2 ";
    cout << p2.first << "   " << p2.second;

    cout << "\n pair3 ";
    cout << p3.first << "   ";
    
    Man m2 = p3.second;
    m2.getMan();

    return 0;
}