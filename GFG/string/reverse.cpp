#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int flag = 0;
        int len = 1;
        // int k = stoi(s.substr(0, 1));
        //cout << s << endl;
        for (int i = 0; i < s.size(); i++)
        {
            int flag1 = 0, flag2 = 0;
            long int k = stoi(s.substr(0, i + 1));
            cout << k << ' ';
            for (int j = i + 1; j < s.size(); j = j + len)
            {

                if (flag1 == 1 || k % 10 == 9)
                {
                    int m = k / 10;
                    int rem = m % 10;
                    while (k % 10 == 9 && m != 0 && rem != 9)
                    {
                        m = m / 10;
                        rem = m % 10;
                    }
                    if (m > 1 && rem != 9)
                    {
                        flag2 = 1;
                    }
                    //cout << k << " " << j << endl;

                    if (flag2 == 0 && (len + j < s.size()) && k + 1 == (stoi(s.substr(j, len + 1))))
                    {

                        flag = 1;
                        flag1 = 1;
                        try
                        {
                            k = stoi(s.substr(j, len + 1));
                        }
                        catch (...)
                        {
                            break;
                        }
                        len++;
                        //cout << k << " " << j;
                        continue;
                    }
                    else if ((len + j - 1 < s.size()) && k + 1 == (stoi(s.substr(j, len))))
                    {
                        try
                        {
                            k = stoi(s.substr(j, len));
                        }
                        catch (...)
                        {
                            break;
                        }
                        flag = 1;
                        continue;
                    }

                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    if ((len + j - 1 < s.size()) && k + 1 == (stoi(s.substr(j, len))))
                    {
                        try
                        {
                            k = stoi(s.substr(j, len));
                        }
                        catch (...)
                        {
                            break;
                        }
                        flag = 1;
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            //cout << len << ' ';
            len++;

            if (flag == 1)
            {
                break;
            }
            //int k=stoi(Substring(0,i));
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}