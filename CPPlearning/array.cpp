using namespace std;
#include <iostream>
#include <array>


int main()
{
    auto x = 12.23f;
    array<int, 5> a = {2, 3, 54, 5, 6};

    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    cout << a.at(3) << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.size() << endl;
    //a.fill(10);

    for (auto i = a.begin(); i < a.end(); i++)
        cout << *i << endl;
    auto *i = &x;
    cout << typeid(i).name() << endl;
    return 0;
}
