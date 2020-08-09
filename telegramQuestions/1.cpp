#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	char bin[100];
	int i = 0;
	while (n > 0) {
		bin[i++] = n % 2 + 48;
		n = n / 2;
	}
	int count = 0, max = 0;
	for (int j = i - 1; j >= 0; j--) {
		cout << bin[j];
		if (bin[j] == '1') {
			count++;
			continue;
		}
		if (max < count) {
			max = count;

		}
		count = 0;
	}


	if (max < count) {
		max = count;
	}

	cout << endl << max << endl;
	return 0;

}