#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct node {
public:
	int a;
	float f;
	void showw() {
		show();
	}
private:
	void show() {
		cout << a << " " << f << endl;
	}
};
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node s1 = {2, 23424.245};
	cout << s1.a << " " << s1.f << endl;
	node s2 = s1;
	s2.showw();



	cout << endl;
	return 0;

}