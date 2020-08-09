#include <iostream>
#include <fstream>
using namespace std;
// #include <conio>
int main()
{
    int k;
    ofstream fout;
    fout.open("00.txt");
    fout << "hellod i \n pak";
    cin >> k;
    fout.close();
    cin >> k;
    return 0;
}
