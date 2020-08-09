#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("input.txt", ios::app);
    int k = fout.tellp();
    cout << k << endl;
    fout << "1111";
    // char ch = fout.get();
    k = fout.tellp();
    fout.close();
    cout << " " << k << endl;
}