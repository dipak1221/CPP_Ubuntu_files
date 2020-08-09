#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("input.txt");

    cout << fin.tellg() << endl;
    cout << (char)fin.get() << endl;

    fin.seekg(2, ios_base::beg);

    cout << fin.tellg() << endl;
    cout << (char)fin.get() << endl;
    cout << fin.tellg() << endl;

    return 0;
}