#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	void *p;
	int a = 12;
	p = &a;
	cout << *(int*)p << endl;
	float f = 12.21;
	p = &f;
	cout << *(float*)p << endl;
	cout << endl;
	return 0;
}