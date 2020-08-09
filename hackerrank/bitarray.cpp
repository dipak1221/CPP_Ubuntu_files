// C++ program to print all primes
// less than N
#include <bits/stdc++.h>
using namespace std;

// function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// Driver Code
int main()
{
    int n, t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int total = 0;
        int p = 2;
        while (n)
        {
            if (isPrime(p))
            {
                total += p;
                n--;
            }
            p++;
        }
        cout << total << endl;
    }

    return 0;
}
