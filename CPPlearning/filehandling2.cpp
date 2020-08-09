#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("filehandling1.cpp");
    ch = fin.get();
    cout << ch;
    while (!fin.eof())
    {
        cout << ch;
        ch = fin.get();
    }
    fin.close();

    return 0;
}