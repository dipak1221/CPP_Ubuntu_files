#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	// freopen("input1.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		cout << "---" << endl;
		int n, k, max = 0;
		cin >> n >> k;

		for (int i = 1; i <= n; i += 1)
		{
			for (int j = i + 1; j <= n; j += 1)
			{
				if ((i & j) < k)
				{
					if (max < (i & j))
						max = i & j;
				}
			}
		}

		cout << max;
	}

	cout << endl;
	return 0;
}