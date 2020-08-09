#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class A {
public:
	void hello() {
		cout << "void" << endl;
	}
	int hello(int a) {
		cout << "char" << endl;
		return 2;
	}
	void hello(float a) {
		cout << "float" << endl;
	}
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	A a;
	a.hello(4.45);
	cout << endl;
	return 0;

}