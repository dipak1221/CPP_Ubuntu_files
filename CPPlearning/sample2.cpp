#include <bits/stdc++.h>
using namespace std;

template <class T>
class AddElements
{

public:
    T element;
    AddElements(T a)
    {
        this->element = a;
    }
    T add(T e)
    {
        return (T)(this->element + e);
    }
    string concatenate(string &s)
    {
        element += s;
        return element;
    }
};
// template <>
// class AddElements <string>{
// public:
//     string element;
//     AddElements(string a){
//         element=a;
// }

// };
/*Write the class AddElements here*/

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
