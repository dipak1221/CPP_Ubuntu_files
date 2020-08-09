#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream fout;
    fout.open("input.txt", ios::ate | ios::app);
    cout << fout.tellp() << endl;
    fout << "m";
    fout.seekp(3);
    cout << fout.tellp() << endl;
    fout << "----";
    fout.close();
    return 0;
}