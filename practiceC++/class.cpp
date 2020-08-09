#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class A
{
public:
	static int mn();
	A() { cout << "A constructor" << endl; }
};
// int A::a;
class B
{
	// static A a;
public:
	B() { cout << "B constructor" << endl; }
};
// A B::a;
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

	B s1;
	// cout << s1.s << " " << endl;
	cout << endl;
	return 0;
}