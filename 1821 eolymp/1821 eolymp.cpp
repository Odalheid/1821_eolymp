#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	while (scanf("%i", &n) && n!= 0)
	{
		int m = n;
		int ** x = new int *[n];
		for (int i = 0; i < 2*n; i++) x[i] = new int[m];
		int res = 0;
		for (int i = 0; i < 2*n; i++)
			for (int j = 0; j < n; j++) {
				scanf("%i", &x[i][j]); 
				if (i >= n) { 
					int b = 0; 
					for (int y = 0; y < n; ++y) {
						b += x[i-n][y] * x[y][j]; 
					}
					res += (x[i][j] == b ? 1 : 0);
				}
			}
		printf("%s\n", (res == n * n ? "YES" : "NO"));
	}
	return 0;
}

